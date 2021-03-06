/*
Copyright Benjamin Worpitz 2018
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_ARCHITECTURE_PTX_H
#define HASH_PREDEF_ARCHITECTURE_PTX_H

#include <predef/version_number.h>
#include <predef/make.h>

/*`
[heading `HASH_PREDEF_ARCH_PTX`]

[@https://en.wikipedia.org/wiki/Parallel_Thread_Execution PTX] architecture.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__CUDA_ARCH__`] [__predef_detection__]]

    [[`__CUDA_ARCH__`] [V.R.0]]
    ]
 */

#define HASH_PREDEF_ARCH_PTX HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__CUDA_ARCH__)
#   undef HASH_PREDEF_ARCH_PTX
#   define HASH_PREDEF_ARCH_PTX HASH_PREDEF_MAKE_10_VR0(__CUDA_ARCH__)
#endif

#if HASH_PREDEF_ARCH_PTX
#   define HASH_PREDEF_ARCH_PTX_AVAILABLE
#endif

#define HASH_PREDEF_ARCH_PTX_NAME "PTX"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_ARCH_PTX,HASH_PREDEF_ARCH_PTX_NAME)
