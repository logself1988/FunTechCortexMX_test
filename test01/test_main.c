//test harness include
#include "unity_fixture.h"
//#includes for module under test

#include "test_main.h"

TEST_GROUP(GroupName);

//Define file scope data accessible to test group members prior to TEST_SETUP.
TEST_SETUP(GroupName)
{
    //initialization steps are executed before each TEST
}
TEST_TEAR_DOWN(GroupName)
{
    //clean up steps are executed after each TEST
}

/**
 * Test that normal ints work on the system.
 */
TEST(GroupName, BasicInt)
{
    int a = 0;
    int b = 0;

    a = 10;
    b = 10;

    TEST_ASSERT_EQUAL_INT( (a*b), 100);
    TEST_ASSERT_EQUAL_INT( (a/b),   1);
}


//Each group has a TEST_GROUP_RUNNER
TEST_GROUP_RUNNER(GroupName)
{
    //Each TEST has a corresponding RUN_TEST_CASE
    RUN_TEST_CASE(GroupName, BasicInt);
    //RUN_TEST_CASE(GroupName, AnotherUniqueTestName);
}


void runAllTests()
{
    RUN_TEST_GROUP(GroupName);
    //RUN_TEST_GROUP(AnotherGroupName);
}
