/*
Copyright Rene Rivera 2008-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_COMPILER_PGI_H
#define HASH_PREDEF_COMPILER_PGI_H

#include <predef/version_number.h>
#include <predef/make.h>

/*`
[heading `HASH_PREDEF_COMP_PGI`]

[@http://en.wikipedia.org/wiki/The_Portland_Group Portland Group C/C++] compiler.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__PGI`] [__predef_detection__]]

    [[`__PGIC__`, `__PGIC_MINOR__`, `__PGIC_PATCHLEVEL__`] [V.R.P]]
    ]
 */

#define HASH_PREDEF_COMP_PGI HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__PGI)
#   if !defined(HASH_PREDEF_COMP_PGI_DETECTION) && (defined(__PGIC__) && defined(__PGIC_MINOR__) && defined(__PGIC_PATCHLEVEL__))
#       define HASH_PREDEF_COMP_PGI_DETECTION HASH_PREDEF_VERSION_NUMBER(__PGIC__,__PGIC_MINOR__,__PGIC_PATCHLEVEL__)
#   endif
#   if !defined(HASH_PREDEF_COMP_PGI_DETECTION)
#       define HASH_PREDEF_COMP_PGI_DETECTION HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#   endif
#endif

#ifdef HASH_PREDEF_COMP_PGI_DETECTION
#   if defined(HASH_PREDEF_DETAIL_COMP_DETECTED)
#       define HASH_PREDEF_COMP_PGI_EMULATED HASH_PREDEF_COMP_PGI_DETECTION
#   else
#       undef HASH_PREDEF_COMP_PGI
#       define HASH_PREDEF_COMP_PGI HASH_PREDEF_COMP_PGI_DETECTION
#   endif
#   define HASH_PREDEF_COMP_PGI_AVAILABLE
#   include <predef/detail/comp_detected.h>
#endif

#define HASH_PREDEF_COMP_PGI_NAME "Portland Group C/C++"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_COMP_PGI,HASH_PREDEF_COMP_PGI_NAME)

#ifdef HASH_PREDEF_COMP_PGI_EMULATED
#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_COMP_PGI_EMULATED,HASH_PREDEF_COMP_PGI_NAME)
#endif
