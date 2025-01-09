#include "unity.h"
#include "test_component.h"
#include "test_mock.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_should_doBlahAndBlah(void) 
{
    gpio_read_ExpectAndReturn(1, -1);

    TEST_ASSERT_EQUAL(3, add(1,2));

}


// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_doBlahAndBlah);
    return UNITY_END();
}