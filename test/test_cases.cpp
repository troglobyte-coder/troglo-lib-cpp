//
// Troglobyte construct:
// author: Michael Gene Brockus
// mail: <mailto: michaelbrockus@gmail.com>
//
#include "troglobyte/package.hpp"
#include <gtest/gtest.h>

//
// list of all the test cases for this project
//
TEST(testFixture, simpleAssertTrue)
{
    ASSERT_TRUE(true);
} // end of test case

TEST(testFixture, simpleAssertCompare)
{
    auto dummy = 3;
    ASSERT_EQ(3, dummy);
} // end of test case

TEST(testFixture, simpleAssertCall)
{
    ASSERT_EQ("Hello, C++ Developer.", trog::greet());
} // end of test case
