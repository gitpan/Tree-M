use ExtUtils::MakeMaker;

WriteMakefile(
    dist	=> {
	            PREOP	=> '(cat INSTALL; pod2text M.pm) | tee README > $(DISTVNAME)/README; chmod -R u=rwX,go=rX . ;',
	            COMPRESS	=> 'gzip -9v',
	            SUFFIX	=> '.gz',
	           },
    CC		=> 'g++',
    LD		=> 'g++',
    OPTIMIZE	=> '-O6 -funroll-all-loops',
    INC		=> '-IGiST -IMT',
    MYEXTLIB	=> 'GiST/libGiST.a MT/libMT.a',
    OBJECT	=> 'M$(OBJ_EXT) PMT$(OBJ_EXT)',
    NAME	=> 'Tree::M',
    VERSION_FROM => 'M.pm',
);

sub MY::postamble { <<'EOF' }

force :

GiST/libGiST.a: force
	cd GiST && make OPTIMIZE="$(OPTIMIZE)" CXX="$(CC)" LD="$(LD)" libGiST.a

MT/libMT.a: GiST/libGiST.a force
	cd MT && make OPTIMIZE="$(OPTIMIZE)" CXX="$(CC)" LD="$(LD)" libMT.a

clean ::
	cd MT && $(MAKE) clean
	cd GiST && $(MAKE) clean

EOF

