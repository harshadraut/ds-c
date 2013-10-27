TESTS = check_stack check_queue check_slist 
check_PROGRAMS = check_stack check_queue check_slist 

check_stack_SOURCES = check_stack.c $(top_builddir)/src/stack.h
check_stack_CFLAGS = @CHECK_CFLAGS@
check_stack_LDADD = $(top_builddir)/src/libds.a @CHECK_LIBS@
check_stack_LDFLAGS = -fprofile-arcs -ftest-coverage

check_queue_SOURCES = check_queue.c $(top_builddir)/src/queue.h
check_queue_CFLAGS = @CHECK_CFLAGS@
check_queue_LDADD = $(top_builddir)/src/libds.a @CHECK_LIBS@
check_queue_LDFLAGS = -fprofile-arcs -ftest-coverage

check_slist_SOURCES = check_slist.c $(top_builddir)/src/slist.h
check_slist_CFLAGS = @CHECK_CFLAGS@
check_slist_LDADD = $(top_builddir)/src/libds.a @CHECK_LIBS@
check_slist_LDFLAGS = -fprofile-arcs -ftest-coverage

