/*
Copyright Rene Rivera 2008-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_ARCHITECTURE_SYS370_H
#define HASH_PREDEF_ARCHITECTURE_SYS370_H

#include <predef/version_number.h>
#include <predef/make.h>

/*`
[heading `HASH_PREDEF_ARCH_SYS370`]

[@http://en.wikipedia.org/wiki/System/370 System/370] architecture.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__370__`] [__predef_detection__]]
    [[`__THW_370__`] [__predef_detection__]]
    ]
 */

#define HASH_PREDEF_ARCH_SYS370 HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__370__) || defined(__THW_370__)
#   undef HASH_PREDEF_ARCH_SYS370
#   define HASH_PREDEF_ARCH_SYS370 HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#endif

#if HASH_PREDEF_ARCH_SYS370
#   define HASH_PREDEF_ARCH_SYS370_AVAILABLE
#endif

#define HASH_PREDEF_ARCH_SYS370_NAME "System/370"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_ARCH_SYS370,HASH_PREDEF_ARCH_SYS370_NAME)
