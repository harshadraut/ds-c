lib_LTLIBRARIES = libds.la liblinkedlist.la libstack.la libqueue.la
libds_la_SOURCES = ds.h
liblinkedlist_la_SOURCES = linkedlist.c linkedlist.h
libstack_la_SOURCES = stack.c stack.h
libqueue_la_SOURCES = queue.c queue.h

bin_PROGRAMS = dsdemo

dsdemo_SOURCES = dsdemo.c
dsdemo_LDADD = libds.la liblinkedlist.la libstack.la libqueue.la

