

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

check_PROGRAMS = v0
TESTS= $(check_PROGRAMS)


v0_LDADD = $(CUNIT_LIBS) $(OCTETOS_CORE_LIBS) $(OCTETOS_MATH_LIBS) $(OCTETOS_PHYSICAL_LIBS) $(top_builddir)/src/liboctetos-chemistry.la
v0_CPPFLAGS = $(CUNIT_CFLAGS) $(OCTETOS_CORE_CFLAGS) $(OCTETOS_MATH_CFLAGS) $(OCTETOS_PHYSICAL_CFLAGS) -I$(top_srcdir)/src/ -DSRCDIRTEST='"$(top_srcdir)/tests"'
v0_SOURCES = v0.cc  


