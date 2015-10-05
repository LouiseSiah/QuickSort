#include "unity.h"
#include "QuickSort.h"
//#include "CException.h"
#include "CustomAssertion.h"

void setUp(void){}

void tearDown(void){}

void test_module_generator_needs_to_be_implemented(void)
{
	TEST_IGNORE_MESSAGE("Implement me!");
}

void test_swap_given_1_2_then_swap_1_with_2_should_become_2_1(void)
{
  int arr[2] ={1, 2};
  int expecArr[2] = {2, 1};
  swap(0, 1, arr);
  
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
  // TEST_ASSERT_EQUAL(2, arr[0]);
}

void test_swap_given_1_2_3_4_then_swap_2_3_should_become_1_3_2_4(void)
{
  int arr[4] = {1, 2, 3, 4};
  int expecArr[4] = {1, 3, 2, 4};
  
  swap(1, 2, arr);
  
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_2_1_should_become_1_2(void)
{
  int arr[2] ={2, 1};
  int expecArr[2] = {1, 2};
  // int arr[4] = {3, 9, 78, 1};
  // int expecArr[4] = {1, 3, 78, 9};
  quickSort(0, 1, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);

}

void test_quickSort_given_3_9_78_1_should_become_1_3_9_78(void)
{
  int arr[4] = {3, 9, 78, 1};
  int expecArr[4] = {1, 3, 9, 78};
  quickSort(0, 3, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}