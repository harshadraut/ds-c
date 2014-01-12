TESTS = check_stack check_queue check_sllist
check_PROGRAMS = check_stack check_queue check_sllist

check_stack_SOURCES = check_stack.c $(top_builddir)/src/stack.h
check_stack_CFLAGS = @CHECK_CFLAGS@
check_stack_LDADD = $(top_builddir)/src/libds.a @CHECK_LIBS@
check_stack_LDFLAGS = -fprofile-arcs -ftest-coverage

check_queue_SOURCES = check_queue.c $(top_builddir)/src/queue.h
check_queue_CFLAGS = @CHECK_CFLAGS@
check_queue_LDADD = $(top_builddir)/src/libds.a @CHECK_LIBS@
check_queue_LDFLAGS = -fprofile-arcs -ftest-coverage

check_sllist_SOURCES = check_sllist.c $(top_builddir)/src/sllist.h
check_sllist_CFLAGS = @CHECK_CFLAGS@
check_sllist_LDADD = $(top_builddir)/src/libds.a @CHECK_LIBS@
check_sllist_LDFLAGS = -fprofile-arcs -ftest-coverage

