LIBRARY = libGiST.a

SRCS = GiSTnode.cpp GiST.cpp GiSTfile.cpp GiSTpredicate.cpp GiSTcursor.cpp

OBJS = $(SRCS:.cpp=.o)

DEST = .

CPP = $(CXX) -fpic

DEFINES = -DUNIX

INCS = 

LINKER = $(LD)

LDFLAGS = #-L/home/users/patella/pub/libg++-2.7.1/

%.o: %.cpp
	$(CPP) -c $(CFLAGS) $(OPTIMIZE) $(DEFINES) $(INCS) $*.cpp

$(LIBRARY): .depend $(OBJS)
	rm -f $(LIBRARY)
	ar r $(LIBRARY) $(OBJS)
	ranlib $(LIBRARY)

clean:
	rm -f $(OBJS) $(LIBRARY) *~ .depend #*# *pure*

depend:
	makedepend $(DEFINES) $(INCS) $(SRCS)

.depend:
	$(MAKE) depend
	touch .depend

install: $(PROGRAM)
	echo Installing $(PROGRAM) in $(DEST)
	install -s $(PROGRAM) $(DEST)

# DO NOT DELETE

GiSTnode.o: /usr/include/string.h /usr/include/features.h
GiSTnode.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
GiSTnode.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
GiSTnode.o: GiST.h GiSTdefs.h /usr/include/assert.h /usr/include/stdlib.h
GiSTnode.o: /usr/include/sys/types.h /usr/include/bits/types.h
GiSTnode.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
GiSTnode.o: /usr/include/time.h /usr/include/endian.h
GiSTnode.o: /usr/include/bits/endian.h /usr/include/sys/select.h
GiSTnode.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
GiSTnode.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
GiSTnode.o: /usr/include/alloca.h /usr/include/math.h
GiSTnode.o: /usr/include/bits/huge_val.h /usr/include/bits/mathdef.h
GiSTnode.o: /usr/include/bits/mathcalls.h GiSTentry.h GiSTpredicate.h
GiSTnode.o: GiSTlist.h GiSTnode.h GiSTpath.h GiSTstore.h GiSTcursor.h
GiST.o: /usr/include/stdio.h /usr/include/features.h /usr/include/sys/cdefs.h
GiST.o: /usr/include/gnu/stubs.h
GiST.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
GiST.o: /usr/include/bits/types.h /usr/include/bits/pthreadtypes.h
GiST.o: /usr/include/bits/sched.h /usr/include/libio.h
GiST.o: /usr/include/_G_config.h /usr/include/wchar.h
GiST.o: /usr/include/bits/wchar.h /usr/include/gconv.h
GiST.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
GiST.o: /usr/include/bits/stdio_lim.h /usr/include/string.h GiST.h GiSTdefs.h
GiST.o: /usr/include/assert.h /usr/include/stdlib.h /usr/include/sys/types.h
GiST.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
GiST.o: /usr/include/sys/select.h /usr/include/bits/select.h
GiST.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
GiST.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
GiST.o: /usr/include/math.h /usr/include/bits/huge_val.h
GiST.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h GiSTentry.h
GiST.o: GiSTpredicate.h GiSTlist.h GiSTnode.h GiSTpath.h GiSTstore.h
GiST.o: GiSTcursor.h
GiSTfile.o: /usr/include/stdio.h /usr/include/features.h
GiSTfile.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
GiSTfile.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
GiSTfile.o: /usr/include/bits/types.h /usr/include/bits/pthreadtypes.h
GiSTfile.o: /usr/include/bits/sched.h /usr/include/libio.h
GiSTfile.o: /usr/include/_G_config.h /usr/include/wchar.h
GiSTfile.o: /usr/include/bits/wchar.h /usr/include/gconv.h
GiSTfile.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
GiSTfile.o: /usr/include/bits/stdio_lim.h /usr/include/sys/types.h
GiSTfile.o: /usr/include/time.h /usr/include/endian.h
GiSTfile.o: /usr/include/bits/endian.h /usr/include/sys/select.h
GiSTfile.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
GiSTfile.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
GiSTfile.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
GiSTfile.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
GiSTfile.o: /usr/include/string.h /usr/include/unistd.h
GiSTfile.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
GiSTfile.o: /usr/include/getopt.h GiSTfile.h GiSTstore.h GiSTdefs.h
GiSTfile.o: /usr/include/assert.h /usr/include/stdlib.h /usr/include/alloca.h
GiSTfile.o: /usr/include/math.h /usr/include/bits/huge_val.h
GiSTfile.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
GiSTpredicate.o: /usr/include/string.h /usr/include/features.h
GiSTpredicate.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
GiSTpredicate.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
GiSTpredicate.o: GiST.h GiSTdefs.h /usr/include/assert.h
GiSTpredicate.o: /usr/include/stdlib.h /usr/include/sys/types.h
GiSTpredicate.o: /usr/include/bits/types.h /usr/include/bits/pthreadtypes.h
GiSTpredicate.o: /usr/include/bits/sched.h /usr/include/time.h
GiSTpredicate.o: /usr/include/endian.h /usr/include/bits/endian.h
GiSTpredicate.o: /usr/include/sys/select.h /usr/include/bits/select.h
GiSTpredicate.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
GiSTpredicate.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
GiSTpredicate.o: /usr/include/math.h /usr/include/bits/huge_val.h
GiSTpredicate.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
GiSTpredicate.o: GiSTentry.h GiSTpredicate.h GiSTlist.h GiSTnode.h GiSTpath.h
GiSTpredicate.o: GiSTstore.h GiSTcursor.h
GiSTcursor.o: GiST.h GiSTdefs.h /usr/include/assert.h /usr/include/features.h
GiSTcursor.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
GiSTcursor.o: /usr/include/stdlib.h
GiSTcursor.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
GiSTcursor.o: /usr/include/sys/types.h /usr/include/bits/types.h
GiSTcursor.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
GiSTcursor.o: /usr/include/time.h /usr/include/endian.h
GiSTcursor.o: /usr/include/bits/endian.h /usr/include/sys/select.h
GiSTcursor.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
GiSTcursor.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
GiSTcursor.o: /usr/include/alloca.h /usr/include/math.h
GiSTcursor.o: /usr/include/bits/huge_val.h /usr/include/bits/mathdef.h
GiSTcursor.o: /usr/include/bits/mathcalls.h GiSTentry.h /usr/include/string.h
GiSTcursor.o: GiSTpredicate.h GiSTlist.h GiSTnode.h GiSTpath.h GiSTstore.h
GiSTcursor.o: GiSTcursor.h
