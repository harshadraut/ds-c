TESTS = check_linkedlist check_stack check_queue
check_PROGRAMS = check_linkedlist check_stack check_queue

check_linkedlist_SOURCES = check_linkedlist.c $(top_builddir)/src/linkedlist.h
check_linkedlist_CFLAGS = @CHECK_CFLAGS@
check_linkedlist_LDADD = $(top_builddir)/src/liblinkedlist.la @CHECK_LIBS@
check_linkedlist_LDFLAGS = -fprofile-arcs -ftest-coverage

check_stack_SOURCES = check_stack.c $(top_builddir)/src/stack.h
check_stack_CFLAGS = @CHECK_CFLAGS@
check_stack_LDADD = $(top_builddir)/src/libstack.la @CHECK_LIBS@
check_stack_LDFLAGS = -fprofile-arcs -ftest-coverage

check_queue_SOURCES = check_queue.c $(top_builddir)/src/queue.h
check_queue_CFLAGS = @CHECK_CFLAGS@
check_queue_LDADD = $(top_builddir)/src/libqueue.la @CHECK_LIBS@
check_queue_LDFLAGS = -fprofile-arcs -ftest-coverage

