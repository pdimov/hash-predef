/*
Copyright (c) Microsoft Corporation 2014
Copyright Rene Rivera 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_PLAT_WINDOWS_PHONE_H
#define HASH_PREDEF_PLAT_WINDOWS_PHONE_H

#include <predef/make.h>
#include <predef/os/windows.h>
#include <predef/platform/windows_uwp.h>
#include <predef/version_number.h>

/*`
[heading `HASH_PREDEF_PLAT_WINDOWS_PHONE`]

[@https://docs.microsoft.com/en-us/windows/uwp/get-started/universal-application-platform-guide UWP]
for Windows Phone development.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP`] [__predef_detection__]]
    ]
 */

#define HASH_PREDEF_PLAT_WINDOWS_PHONE HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if HASH_PREDEF_OS_WINDOWS && \
    defined(WINAPI_FAMILY_PHONE_APP) && WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
#   undef HASH_PREDEF_PLAT_WINDOWS_PHONE
#   define HASH_PREDEF_PLAT_WINDOWS_PHONE HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#endif
 
#if HASH_PREDEF_PLAT_WINDOWS_PHONE
#   define HASH_PREDEF_PLAT_WINDOWS_PHONE_AVAILABLE
#   include <predef/detail/platform_detected.h>
#endif

#define HASH_PREDEF_PLAT_WINDOWS_PHONE_NAME "Windows Phone"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_PLAT_WINDOWS_PHONE,HASH_PREDEF_PLAT_WINDOWS_PHONE_NAME)
