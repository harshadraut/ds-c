lib_LTLIBRARIES = libds.la libslist.la libstack.la libqueue.la
libds_la_SOURCES = ds.h
libslist_la_SOURCES = slist.c slist.h
libstack_la_SOURCES = stack.c stack.h
libqueue_la_SOURCES = queue.c queue.h

bin_PROGRAMS = dsdemo

dsdemo_SOURCES = dsdemo.c
dsdemo_LDADD = libds.la libslist.la libstack.la libqueue.la

