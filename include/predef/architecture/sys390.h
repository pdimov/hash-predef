/*
Copyright Rene Rivera 2008-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_ARCHITECTURE_SYS390_H
#define HASH_PREDEF_ARCHITECTURE_SYS390_H

#include <predef/version_number.h>
#include <predef/make.h>

/*`
[heading `HASH_PREDEF_ARCH_SYS390`]

[@http://en.wikipedia.org/wiki/System/390 System/390] architecture.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__s390__`] [__predef_detection__]]
    [[`__s390x__`] [__predef_detection__]]
    ]
 */

#define HASH_PREDEF_ARCH_SYS390 HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__s390__) || defined(__s390x__)
#   undef HASH_PREDEF_ARCH_SYS390
#   define HASH_PREDEF_ARCH_SYS390 HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#endif

#if HASH_PREDEF_ARCH_SYS390
#   define HASH_PREDEF_ARCH_SYS390_AVAILABLE
#endif

#define HASH_PREDEF_ARCH_SYS390_NAME "System/390"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_ARCH_SYS390,HASH_PREDEF_ARCH_SYS390_NAME)
