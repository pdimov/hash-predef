/*
Copyright Rene Rivera 2008-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_LIBRARY_STD_LIBCOMO_H
#define HASH_PREDEF_LIBRARY_STD_LIBCOMO_H

#include <predef/library/std/_prefix.h>

#include <predef/version_number.h>
#include <predef/make.h>

/*`
[heading `HASH_PREDEF_LIB_STD_COMO`]

[@http://www.comeaucomputing.com/libcomo/ Comeau Computing] Standard C++ Library.
Version number available as major.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__LIBCOMO__`] [__predef_detection__]]

    [[`__LIBCOMO_VERSION__`] [V.0.0]]
    ]
 */

#define HASH_PREDEF_LIB_STD_COMO HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__LIBCOMO__)
#   undef HASH_PREDEF_LIB_STD_COMO
#   define HASH_PREDEF_LIB_STD_COMO HASH_PREDEF_VERSION_NUMBER(__LIBCOMO_VERSION__,0,0)
#endif

#if HASH_PREDEF_LIB_STD_COMO
#   define HASH_PREDEF_LIB_STD_COMO_AVAILABLE
#endif

#define HASH_PREDEF_LIB_STD_COMO_NAME "Comeau Computing"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_LIB_STD_COMO,HASH_PREDEF_LIB_STD_COMO_NAME)
