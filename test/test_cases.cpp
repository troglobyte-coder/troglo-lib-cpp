//
// Troglobyte construct:
// author: Michael Gene Brockus
// mail: <mailto: michaelbrockus@gmail.com>
//
#include "troglobyte/package.hpp"
#include <unity.h>


//
//  project setup teardown functions if needed
//
void setUp(void)
{
    // TODO.
} // end of function setUp

void tearDown(void)
{
    // TODO.
} // end of function tearDown

//
// list of all the test cases for this project
//
static void test_simpleAssertTrue()
{
    TEST_ASSERT_TRUE(true);
} // end of test case

static void test_simpleAssertNull()
{
    TEST_ASSERT_NULL(NULL);
} // end of test case

static void test_simpleAssertCompare()
{
    auto dummy = 3;
    TEST_ASSERT_EQUAL_INT(3, dummy);
} // end of test case

static void test_simpleAssertCall()
{
    TEST_ASSERT_EQUAL_STRING("Hello, C++ Developer.", trog::greet());
} // end of test case

//
//  here main is used as the test runner
//
auto main() -> int
{
    UNITY_BEGIN();

    RUN_TEST(test_simpleAssertTrue);
    RUN_TEST(test_simpleAssertNull);
    RUN_TEST(test_simpleAssertCall);
    RUN_TEST(test_simpleAssertCompare);

    return UNITY_END();
} // end of func
