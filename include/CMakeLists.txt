################################################################################
# AUTOMATICALLY GENERATED FILE -- DO NOT EDIT.
#
# This file is generated automatically by libpqxx's template2mak.py script, and
# will be rewritten from time to time.
#
# If you modify this file, chances are your modifications will be lost.
#
# The template2mak.py script should be available in the tools directory of the
# libpqxx source archive.
#
# Generated from template './include/CMakeLists.txt.template'.
################################################################################
# TODO: We're giving exact filenames here.  Don't pretend they're globs.
install(
    DIRECTORY pqxx
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING
        PATTERN array.hxx
        PATTERN array
        PATTERN basic_connection.hxx
        PATTERN basic_connection
        PATTERN binarystring.hxx
        PATTERN binarystring
        PATTERN compiler-internal-post.hxx
        PATTERN compiler-internal-post
        PATTERN compiler-internal-pre.hxx
        PATTERN compiler-internal-pre
        PATTERN compiler-internal.hxx
        PATTERN compiler-internal
        PATTERN compiler-public.hxx
        PATTERN compiler-public
        PATTERN connection.hxx
        PATTERN connection
        PATTERN connection_base.hxx
        PATTERN connection_base
        PATTERN connectionpolicy.hxx
        PATTERN connectionpolicy
        PATTERN cursor.hxx
        PATTERN cursor
        PATTERN dbtransaction.hxx
        PATTERN dbtransaction
        PATTERN errorhandler.hxx
        PATTERN errorhandler
        PATTERN except.hxx
        PATTERN except
        PATTERN field.hxx
        PATTERN field
        PATTERN isolation.hxx
        PATTERN isolation
        PATTERN largeobject.hxx
        PATTERN largeobject
        PATTERN nontransaction.hxx
        PATTERN nontransaction
        PATTERN notification.hxx
        PATTERN notification
        PATTERN pipeline.hxx
        PATTERN pipeline
        PATTERN prepared_statement.hxx
        PATTERN prepared_statement
        PATTERN result.hxx
        PATTERN result
        PATTERN result_iterator.hxx
        PATTERN result_iterator
        PATTERN robusttransaction.hxx
        PATTERN robusttransaction
        PATTERN row.hxx
        PATTERN row
        PATTERN strconv.hxx
        PATTERN strconv
        PATTERN stream_base.hxx
        PATTERN stream_base
        PATTERN stream_from.hxx
        PATTERN stream_from
        PATTERN stream_to.hxx
        PATTERN stream_to
        PATTERN subtransaction.hxx
        PATTERN subtransaction
        PATTERN tablereader.hxx
        PATTERN tablereader
        PATTERN tablestream.hxx
        PATTERN tablestream
        PATTERN tablewriter.hxx
        PATTERN tablewriter
        PATTERN transaction.hxx
        PATTERN transaction
        PATTERN transaction_base.hxx
        PATTERN transaction_base
        PATTERN transactor.hxx
        PATTERN transactor
        PATTERN types.hxx
        PATTERN types
        PATTERN util.hxx
        PATTERN util
        PATTERN version.hxx
        PATTERN version
)

# TODO: We're giving exact filenames here.  Don't pretend they're globs.
install(
    DIRECTORY ${PROJECT_BINARY_DIR}/include/pqxx
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING
        PATTERN config-public-compiler.h
)

# TODO: We're giving exact filenames here.  Don't pretend they're globs.
install(
    DIRECTORY pqxx/doc/
    DESTINATION ${CMAKE_INSTALL_DOCDIR}
    FILES_MATCHING
        PATTERN README.md
        PATTERN accessing-results.md
        PATTERN escaping.md
        PATTERN getting-started.md
        PATTERN mainpage.md
        PATTERN performance.md
        PATTERN prepared-statement.md
        PATTERN streams.md
        PATTERN thread-safety.md
)
