TESTS = check_linkedlist check_stack
check_PROGRAMS = check_linkedlist check_stack

check_linkedlist_SOURCES = check_linkedlist.c $(top_builddir)/src/linkedlist.h
check_linkedlist_CFLAGS = @CHECK_CFLAGS@
check_linkedlist_LDADD = $(top_builddir)/src/liblinkedlist.la @CHECK_LIBS@
check_linkedlist_LDFLAGS = -fprofile-arcs -ftest-coverage

check_stack_SOURCES = check_stack.c $(top_builddir)/src/stack.h
check_stack_CFLAGS = @CHECK_CFLAGS@
check_stack_LDADD = $(top_builddir)/src/libstack.la @CHECK_LIBS@
check_stack_LDFLAGS = -fprofile-arcs -ftest-coverage

