
SUBDIRS = src tests

if WITH_TESTS
SUBDIRS +=  tests
endif

dist_doc_DATA = \
	README \
	COPYING \
	AUTHORS \
	ChangeLog \
	INSTALL \
	NEWS



uninstall-local:
	-rm -r $(docdir)
