TESTS = check_linkedlist
check_PROGRAMS = check_linkedlist

check_linkedlist_SOURCES = check_linkedlist.c $(top_builddir)/src/linkedlist.h
check_linkedlist_CFLAGS = @CHECK_CFLAGS@
check_linkedlist_LDADD = $(top_builddir)/src/liblinkedlist.la @CHECK_LIBS@
check_linkedlist_LDFLAGS = -fprofile-arcs -ftest-coverage
