

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g


lib_LTLIBRARIES = liboctetos-chemistry.la


liboctetos_chemistry_la_CXXFLAGS = 
liboctetos_chemistry_la_LIBADD =  
liboctetos_chemistry_la_SOURCES = atom.cc Molecule.cc Generator.cc \
	gen/qnum.cc gen/names.cc gen/symbols.cc gen/cats.cc gen/valencias.cc \
	gen/negativity.cc
