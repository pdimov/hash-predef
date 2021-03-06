/*
Copyright Rene Rivera 2012-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef HASH_PREDEF_OS_BSD_NET_H
#define HASH_PREDEF_OS_BSD_NET_H

#include <predef/os/bsd.h>

/*`
[heading `HASH_PREDEF_OS_BSD_NET`]

[@http://en.wikipedia.org/wiki/Netbsd NetBSD] operating system.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__NETBSD__`] [__predef_detection__]]
    [[`__NetBSD__`] [__predef_detection__]]

    [[`__NETBSD_version`] [V.R.P]]
    [[`NetBSD0_8`] [0.8.0]]
    [[`NetBSD0_9`] [0.9.0]]
    [[`NetBSD1_0`] [1.0.0]]
    [[`__NetBSD_Version`] [V.R.P]]
    ]
 */

#define HASH_PREDEF_OS_BSD_NET HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE

#if !defined(HASH_PREDEF_DETAIL_OS_DETECTED) && ( \
    defined(__NETBSD__) || defined(__NetBSD__) \
    )
#   ifndef HASH_PREDEF_OS_BSD_AVAILABLE
#       define HASH_PREDEF_OS_BSD HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#       define HASH_PREDEF_OS_BSD_AVAILABLE
#   endif
#   undef HASH_PREDEF_OS_BSD_NET
#   if defined(__NETBSD__)
#       if defined(__NETBSD_version)
#           if __NETBSD_version < 500000
#               define HASH_PREDEF_OS_BSD_NET \
                    HASH_PREDEF_MAKE_10_VRP000(__NETBSD_version)
#           else
#               define HASH_PREDEF_OS_BSD_NET \
                    HASH_PREDEF_MAKE_10_VRR000(__NETBSD_version)
#           endif
#       else
#           define HASH_PREDEF_OS_BSD_NET HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#       endif
#   elif defined(__NetBSD__)
#       if !defined(HASH_PREDEF_OS_BSD_NET) && defined(NetBSD0_8)
#           define HASH_PREDEF_OS_BSD_NET HASH_PREDEF_VERSION_NUMBER(0,8,0)
#       endif
#       if !defined(HASH_PREDEF_OS_BSD_NET) && defined(NetBSD0_9)
#           define HASH_PREDEF_OS_BSD_NET HASH_PREDEF_VERSION_NUMBER(0,9,0)
#       endif
#       if !defined(HASH_PREDEF_OS_BSD_NET) && defined(NetBSD1_0)
#           define HASH_PREDEF_OS_BSD_NET HASH_PREDEF_VERSION_NUMBER(1,0,0)
#       endif
#       if !defined(HASH_PREDEF_OS_BSD_NET) && defined(__NetBSD_Version)
#           define HASH_PREDEF_OS_BSD_NET \
                HASH_PREDEF_MAKE_10_VVRR00PP00(__NetBSD_Version)
#       endif
#       if !defined(HASH_PREDEF_OS_BSD_NET)
#           define HASH_PREDEF_OS_BSD_NET HASH_PREDEF_VERSION_NUMBER_AVAILABLE
#       endif
#   endif
#endif

#if HASH_PREDEF_OS_BSD_NET
#   define HASH_PREDEF_OS_BSD_NET_AVAILABLE
#   include <predef/detail/os_detected.h>
#endif

#define HASH_PREDEF_OS_BSD_NET_NAME "NetBSD"

#endif

#include <predef/detail/test.h>
HASH_PREDEF_DECLARE_TEST(HASH_PREDEF_OS_BSD_NET,HASH_PREDEF_OS_BSD_NET_NAME)
