#include <iostream>
#include <sstream>

#include "test_helpers.hxx"


using namespace std;
using namespace pqxx;

// Simple test program for libpqxx's Large Objects interface.
namespace
{
/* Read contents of Stream into a single string.  The data will go through
 * input formatting, so whitespace will be taken as separators between chunks
 * of data.
 */
template<typename T> string UnStream(T &Stream)
{
  string Result, X;
  while (Stream >> X) Result += X;
  return Result;
}


void test_048()
{
  connection conn;

  largeobject Obj(oid_none);
  const string Contents = "Testing, testing, 1-2-3";

  perform(
    [&conn, &Obj, &Contents]()
    {
      work tx{conn};
      auto new_obj = largeobject(tx);
      cout << "Created large object #" << new_obj.id() << endl;

      olostream S(tx, new_obj);
      S << Contents;
      S.flush();
      tx.commit();
      Obj = new_obj;
    });

  const string Readback = perform(
    [&conn, &Obj]()
    {
      work tx{conn};
      ilostream S(tx, Obj.id());
      return UnStream(S);
    });

  perform([&conn, &Obj](){
      work tx{conn};
      Obj.remove(tx);
      tx.commit();
  });

  /* Reconstruct what will happen to our contents string if we put it into a
   * stream and then read it back.  We can compare this with what comes back
   * from our large object stream.
   */
  stringstream TestStream;
  TestStream << Contents;
  const string StreamedContents = UnStream(TestStream);

  cout << StreamedContents << endl << Readback << endl;

  PQXX_CHECK_EQUAL(
	Readback,
	StreamedContents,
	"Got wrong number of bytes from large object.");
}


PQXX_REGISTER_TEST(test_048);
} // namespace
