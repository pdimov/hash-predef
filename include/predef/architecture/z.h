/*
Copyright Rene Rivera 2008-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_ARCHITECTURE_Z_H
#define HASH_PREDEF_ARCHITECTURE_Z_H

#include <predef/version_number.h>
#include <predef/make.h>

/*`
[heading `HASH_PREDEF_ARCH_Z`]

[@http://en.wikipedia.org/wiki/Z/Architecture z/Architecture] architecture.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__SYSC_ZARCH__`] [__predef_detection__]]
    ]
 */

#define HASH_PREDEF_ARCH_Z HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__SYSC_ZARCH__)
#   undef HASH_PREDEF_ARCH_Z
#   define HASH_PREDEF_ARCH_Z HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#endif

#if HASH_PREDEF_ARCH_Z
#   define HASH_PREDEF_ARCH_Z_AVAILABLE
#endif

#define HASH_PREDEF_ARCH_Z_NAME "z/Architecture"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_ARCH_Z,HASH_PREDEF_ARCH_Z_NAME)
