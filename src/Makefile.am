lib_LIBRARIES = libds.a

libds_adir = $(includedir)/ds
libdir = @libdir@/ds

libds_a_HEADERS = ds.h slist.h stack.h queue.h

libds_a_SOURCES = slist.c stack.c queue.c

bin_PROGRAMS = dsdemo

dsdemo_SOURCES = dsdemo.c
dsdemo_LDADD = libds.a

