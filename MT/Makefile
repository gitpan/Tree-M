######################################################################
#                                                                    #
# Copyright (c) 1997,1998, 1999                                      #
# Multimedia DB Group and DEIS - CSITE-CNR,                          #
# University of Bologna, Bologna, ITALY.                             #
#                                                                    #
# All Rights Reserved.                                               #
#                                                                    #
# Permission to use, copy, and distribute this software and its      #
# documentation for NON-COMMERCIAL purposes and without fee is       #
# hereby granted provided  that this copyright notice appears in     #
# all copies.                                                        #
#                                                                    #
# THE AUTHORS MAKE NO REPRESENTATIONS OR WARRANTIES ABOUT THE        #
# SUITABILITY OF THE SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING  #
# BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY,      #
# FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT. THE AUTHOR  #
# SHALL NOT BE LIABLE FOR ANY DAMAGES SUFFERED BY LICENSEE AS A      #
# RESULT OF USING, MODIFYING OR DISTRIBUTING THIS SOFTWARE OR ITS    #
# DERIVATIVES.                                                       #
#                                                                    #
######################################################################

#         Makefile for M-tree test program

PROGRAM = MTree

CPP = $(CXX) -fpic

CFLAGS = -DUNIX

INCS = -I../GiST

LINKER = $(CXX)

SRCS = MTfile.cpp MTentry.cpp MTnode.cpp MTpredicate.cpp MTobject.cpp MT.cpp MTcursor.cpp BulkLoad.cpp # Main.cpp
       
OBJS = $(SRCS:.cpp=.o)

LIBS = ../GiST/libGiST.a

DEST = .

all: libMT.a

libMT.a: $(OBJS)
	ar rc libMT.a $(OBJS)
	ranlib libMT.a

$(PROGRAM): .depend $(OBJS) $(LIBS)
	$(LINKER) -o $(PROGRAM) $(LDFLAGS) $(OBJS) $(LIBS)

gen:
	$(CPP) -o generate $(CFLAGS) $(INCS) $(LDFLAGS) generate.cpp

depend:
	makedepend $(DEFINES) $(INCS) $(SRCS)

.depend:
	$(MAKE) depend
	touch .depend

%.o: %.cpp
	$(CPP) -c $(CFLAGS) $(OPTIMIZE) $(INCS) $*.cpp

clean:
	rm -f $(OBJS) $(PROGRAM) libMT.a .depend

install: $(PROGRAM)
	echo Installing $(PROGRAM) in $(DEST)
	install -s $(PROGRAM) $(DEST)
# DO NOT DELETE

MTfile.o: /usr/include/sys/stat.h /usr/include/features.h
MTfile.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
MTfile.o: /usr/include/bits/types.h
MTfile.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
MTfile.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
MTfile.o: /usr/include/bits/stat.h /usr/include/fcntl.h
MTfile.o: /usr/include/bits/fcntl.h /usr/include/sys/types.h
MTfile.o: /usr/include/time.h /usr/include/endian.h
MTfile.o: /usr/include/bits/endian.h /usr/include/sys/select.h
MTfile.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
MTfile.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
MTfile.o: /usr/include/string.h MTfile.h ../GiST/GiSTstore.h GiSTdefs.h
MTfile.o: /usr/include/assert.h /usr/include/stdlib.h /usr/include/alloca.h
MTfile.o: /usr/include/math.h /usr/include/bits/huge_val.h
MTfile.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
MTentry.o: MTentry.h /usr/include/string.h /usr/include/features.h
MTentry.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
MTentry.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
MTentry.o: /usr/include/stdio.h /usr/include/bits/types.h
MTentry.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
MTentry.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
MTentry.o: /usr/include/bits/wchar.h /usr/include/gconv.h
MTentry.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
MTentry.o: /usr/include/bits/stdio_lim.h /usr/include/values.h
MTentry.o: /usr/include/limits.h /usr/include/bits/wordsize.h
MTentry.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
MTentry.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
MTentry.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/float.h
MTentry.o: ../GiST/GiST.h GiSTdefs.h /usr/include/assert.h
MTentry.o: /usr/include/stdlib.h /usr/include/sys/types.h /usr/include/time.h
MTentry.o: /usr/include/endian.h /usr/include/bits/endian.h
MTentry.o: /usr/include/sys/select.h /usr/include/bits/select.h
MTentry.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
MTentry.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
MTentry.o: /usr/include/math.h /usr/include/bits/huge_val.h
MTentry.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
MTentry.o: ../GiST/GiSTentry.h ../GiST/GiSTpredicate.h ../GiST/GiSTlist.h
MTentry.o: ../GiST/GiSTnode.h ../GiST/GiSTpath.h ../GiST/GiSTstore.h
MTentry.o: ../GiST/GiSTcursor.h MTobject.h ../object.h ../PMT.h MT.h MTfile.h
MTentry.o: MTnode.h MTcursor.h list.h
MTnode.o: /usr/include/string.h /usr/include/features.h
MTnode.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
MTnode.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h MT.h
MTnode.o: ../GiST/GiST.h GiSTdefs.h /usr/include/assert.h
MTnode.o: /usr/include/stdlib.h /usr/include/sys/types.h
MTnode.o: /usr/include/bits/types.h /usr/include/bits/pthreadtypes.h
MTnode.o: /usr/include/bits/sched.h /usr/include/time.h /usr/include/endian.h
MTnode.o: /usr/include/bits/endian.h /usr/include/sys/select.h
MTnode.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
MTnode.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
MTnode.o: /usr/include/alloca.h /usr/include/math.h
MTnode.o: /usr/include/bits/huge_val.h /usr/include/bits/mathdef.h
MTnode.o: /usr/include/bits/mathcalls.h ../GiST/GiSTentry.h
MTnode.o: ../GiST/GiSTpredicate.h ../GiST/GiSTlist.h ../GiST/GiSTnode.h
MTnode.o: ../GiST/GiSTpath.h ../GiST/GiSTstore.h ../GiST/GiSTcursor.h
MTnode.o: MTfile.h MTnode.h MTentry.h /usr/include/stdio.h
MTnode.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
MTnode.o: /usr/include/bits/wchar.h /usr/include/gconv.h
MTnode.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
MTnode.o: /usr/include/bits/stdio_lim.h /usr/include/values.h
MTnode.o: /usr/include/limits.h /usr/include/bits/wordsize.h
MTnode.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
MTnode.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
MTnode.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/float.h
MTnode.o: MTobject.h ../object.h ../PMT.h MTcursor.h list.h MTpredicate.h
MTpredicate.o: MT.h ../GiST/GiST.h GiSTdefs.h /usr/include/assert.h
MTpredicate.o: /usr/include/features.h /usr/include/sys/cdefs.h
MTpredicate.o: /usr/include/gnu/stubs.h /usr/include/stdlib.h
MTpredicate.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
MTpredicate.o: /usr/include/sys/types.h /usr/include/bits/types.h
MTpredicate.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
MTpredicate.o: /usr/include/time.h /usr/include/endian.h
MTpredicate.o: /usr/include/bits/endian.h /usr/include/sys/select.h
MTpredicate.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
MTpredicate.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
MTpredicate.o: /usr/include/alloca.h /usr/include/math.h
MTpredicate.o: /usr/include/bits/huge_val.h /usr/include/bits/mathdef.h
MTpredicate.o: /usr/include/bits/mathcalls.h ../GiST/GiSTentry.h
MTpredicate.o: /usr/include/string.h ../GiST/GiSTpredicate.h
MTpredicate.o: ../GiST/GiSTlist.h ../GiST/GiSTnode.h ../GiST/GiSTpath.h
MTpredicate.o: ../GiST/GiSTstore.h ../GiST/GiSTcursor.h MTfile.h MTnode.h
MTpredicate.o: MTentry.h /usr/include/stdio.h /usr/include/libio.h
MTpredicate.o: /usr/include/_G_config.h /usr/include/wchar.h
MTpredicate.o: /usr/include/bits/wchar.h /usr/include/gconv.h
MTpredicate.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
MTpredicate.o: /usr/include/bits/stdio_lim.h /usr/include/values.h
MTpredicate.o: /usr/include/limits.h /usr/include/bits/wordsize.h
MTpredicate.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
MTpredicate.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
MTpredicate.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/float.h
MTpredicate.o: MTobject.h ../object.h ../PMT.h MTcursor.h list.h
MTpredicate.o: MTpredicate.h
MTobject.o: /usr/include/stdio.h /usr/include/features.h
MTobject.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
MTobject.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
MTobject.o: /usr/include/bits/types.h /usr/include/bits/pthreadtypes.h
MTobject.o: /usr/include/bits/sched.h /usr/include/libio.h
MTobject.o: /usr/include/_G_config.h /usr/include/wchar.h
MTobject.o: /usr/include/bits/wchar.h /usr/include/gconv.h
MTobject.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
MTobject.o: /usr/include/bits/stdio_lim.h MTobject.h ../object.h ../PMT.h
MTobject.o: ../GiST/GiSTlist.h
MT.o: /usr/include/stdlib.h /usr/include/features.h /usr/include/sys/cdefs.h
MT.o: /usr/include/gnu/stubs.h
MT.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
MT.o: /usr/include/sys/types.h /usr/include/bits/types.h
MT.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
MT.o: /usr/include/time.h /usr/include/endian.h /usr/include/bits/endian.h
MT.o: /usr/include/sys/select.h /usr/include/bits/select.h
MT.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
MT.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h list.h
MT.o: /usr/include/assert.h MT.h ../GiST/GiST.h GiSTdefs.h
MT.o: /usr/include/math.h /usr/include/bits/huge_val.h
MT.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
MT.o: ../GiST/GiSTentry.h /usr/include/string.h ../GiST/GiSTpredicate.h
MT.o: ../GiST/GiSTlist.h ../GiST/GiSTnode.h ../GiST/GiSTpath.h
MT.o: ../GiST/GiSTstore.h ../GiST/GiSTcursor.h MTfile.h MTnode.h MTentry.h
MT.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
MT.o: /usr/include/wchar.h /usr/include/bits/wchar.h /usr/include/gconv.h
MT.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
MT.o: /usr/include/bits/stdio_lim.h /usr/include/values.h
MT.o: /usr/include/limits.h /usr/include/bits/wordsize.h
MT.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
MT.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
MT.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/float.h MTobject.h
MT.o: ../object.h ../PMT.h MTcursor.h MTpredicate.h
MTcursor.o: MTcursor.h ../GiST/GiST.h GiSTdefs.h /usr/include/assert.h
MTcursor.o: /usr/include/features.h /usr/include/sys/cdefs.h
MTcursor.o: /usr/include/gnu/stubs.h /usr/include/stdlib.h
MTcursor.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
MTcursor.o: /usr/include/sys/types.h /usr/include/bits/types.h
MTcursor.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
MTcursor.o: /usr/include/time.h /usr/include/endian.h
MTcursor.o: /usr/include/bits/endian.h /usr/include/sys/select.h
MTcursor.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
MTcursor.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
MTcursor.o: /usr/include/alloca.h /usr/include/math.h
MTcursor.o: /usr/include/bits/huge_val.h /usr/include/bits/mathdef.h
MTcursor.o: /usr/include/bits/mathcalls.h ../GiST/GiSTentry.h
MTcursor.o: /usr/include/string.h ../GiST/GiSTpredicate.h ../GiST/GiSTlist.h
MTcursor.o: ../GiST/GiSTnode.h ../GiST/GiSTpath.h ../GiST/GiSTstore.h
MTcursor.o: ../GiST/GiSTcursor.h list.h MT.h MTfile.h MTnode.h MTentry.h
MTcursor.o: /usr/include/stdio.h /usr/include/libio.h
MTcursor.o: /usr/include/_G_config.h /usr/include/wchar.h
MTcursor.o: /usr/include/bits/wchar.h /usr/include/gconv.h
MTcursor.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
MTcursor.o: /usr/include/bits/stdio_lim.h /usr/include/values.h
MTcursor.o: /usr/include/limits.h /usr/include/bits/wordsize.h
MTcursor.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
MTcursor.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
MTcursor.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/float.h
MTcursor.o: MTobject.h ../object.h ../PMT.h MTpredicate.h
BulkLoad.o: MT.h ../GiST/GiST.h GiSTdefs.h /usr/include/assert.h
BulkLoad.o: /usr/include/features.h /usr/include/sys/cdefs.h
BulkLoad.o: /usr/include/gnu/stubs.h /usr/include/stdlib.h
BulkLoad.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stddef.h
BulkLoad.o: /usr/include/sys/types.h /usr/include/bits/types.h
BulkLoad.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sched.h
BulkLoad.o: /usr/include/time.h /usr/include/endian.h
BulkLoad.o: /usr/include/bits/endian.h /usr/include/sys/select.h
BulkLoad.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
BulkLoad.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
BulkLoad.o: /usr/include/alloca.h /usr/include/math.h
BulkLoad.o: /usr/include/bits/huge_val.h /usr/include/bits/mathdef.h
BulkLoad.o: /usr/include/bits/mathcalls.h ../GiST/GiSTentry.h
BulkLoad.o: /usr/include/string.h ../GiST/GiSTpredicate.h ../GiST/GiSTlist.h
BulkLoad.o: ../GiST/GiSTnode.h ../GiST/GiSTpath.h ../GiST/GiSTstore.h
BulkLoad.o: ../GiST/GiSTcursor.h MTfile.h MTnode.h MTentry.h
BulkLoad.o: /usr/include/stdio.h /usr/include/libio.h
BulkLoad.o: /usr/include/_G_config.h /usr/include/wchar.h
BulkLoad.o: /usr/include/bits/wchar.h /usr/include/gconv.h
BulkLoad.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/stdarg.h
BulkLoad.o: /usr/include/bits/stdio_lim.h /usr/include/values.h
BulkLoad.o: /usr/include/limits.h /usr/include/bits/wordsize.h
BulkLoad.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
BulkLoad.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
BulkLoad.o: /usr/lib/gcc-lib/i586-pc-linux-gnu/2.95.2.1/include/float.h
BulkLoad.o: MTobject.h ../object.h ../PMT.h MTcursor.h list.h
