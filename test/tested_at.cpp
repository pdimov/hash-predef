/*
Copyright Rene Rivera 2011-2017
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/
#include <predef/version_number.h>
#include <predef/other/workaround.h>
#include <exception>
#include <vector>
#include <string>
#include <iostream>

namespace
{
    struct test_info
    {
        std::string value;
        bool passed;

        test_info(std::string const & v, bool p) : value(v), passed(p) {}
        test_info(test_info const & o) : value(o.value), passed(o.passed) {}
    };

    std::vector<test_info> test_results;
}

#define PREDEF_CHECK(X) test_results.push_back(test_info(#X,(X)))

void test_HASH_PREDEF_TESTED_AT()
{
    PREDEF_CHECK(HASH_PREDEF_TESTED_AT(HASH_PREDEF_VERSION_NUMBER(15,15,15),0xF,0xF,0xF));
    PREDEF_CHECK(HASH_PREDEF_TESTED_AT(HASH_PREDEF_VERSION_NUMBER(1,0,0),1,0,0));
    PREDEF_CHECK(HASH_PREDEF_TESTED_AT(HASH_PREDEF_VERSION_NUMBER(0,9,0),1,0,0));
    PREDEF_CHECK(HASH_PREDEF_TESTED_AT(HASH_PREDEF_VERSION_NUMBER(2,0,0),1,0,0));
    PREDEF_CHECK(!HASH_PREDEF_TESTED_AT(HASH_PREDEF_VERSION_NUMBER_NOT_AVAILABLE,1,0,0));
}

int main()
{
    test_HASH_PREDEF_TESTED_AT();

    unsigned fail_count = 0;
    std::vector<test_info>::iterator i = test_results.begin();
    std::vector<test_info>::iterator e = test_results.end();
    for (; i != e; ++i)
    {
        std::cout
            << (i->passed ? "[passed]" : "[failed]")
            << " " << i->value
            << std::endl;
        fail_count += i->passed ? 0 : 1;
    }
    std::cout
        << std::endl
        << "TOTAL: "
        << "passed " << (test_results.size()-fail_count) << ", "
        << "failed " << (fail_count) << ", "
        << "of " << (test_results.size())
        << std::endl;
    return fail_count;
}
