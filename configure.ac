

AC_INIT(octetos-chimestry, 0.1.0,azael.devel@gmail.com)

AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([1.11 gnu subdir-objects])

AM_SILENT_RULES([yes])

AC_PROG_CXX





LT_INIT


PKG_CHECK_MODULES(OCTETOS_CORE,octetos-core)

PKG_CHECK_MODULES(OCTETOS_MATH,octetos-math)

PKG_CHECK_MODULES(OCTETOS_PHYSICAL,octetos-physical)

AM_CONDITIONAL(WITH_TESTS, test x"$with_tests" = "xyes")
AC_ARG_WITH([tests], AS_HELP_STRING([--with-tests], [Compilando con soporte para Tests]))
if test "x$with_tests" = "xyes"; then 
	PKG_CHECK_MODULES(CUNIT,cunit)
fi


AC_OUTPUT([
Makefile
src/Makefile
tests/Makefile
])
