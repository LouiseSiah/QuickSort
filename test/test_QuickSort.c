#include "unity.h"
#include "QuickSort.h"
#include "CustomAssertion.h"

void setUp(void){}

void tearDown(void){}

// void test_module_generator_needs_to_be_implemented(void)
// {
	// TEST_IGNORE_MESSAGE("Implement me!");
// }

void test_swap_given_1_then_swap_should_become_1(void)
{
  int arr[1] = {1};
  int expecArr[1] = {1};
  swap(0, 0, arr);

  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_swap_given_1_2_then_swap_1_with_2_should_become_2_1(void)
{
  int arr[2] = {1, 2};
  int expecArr[2] = {2, 1};
  swap(0, 1, arr);

  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_swap_given_1_2_3_4_then_swap_2_3_should_become_1_3_2_4(void)
{
  int arr[4] = {1, 2, 3, 4};
  int expecArr[4] = {1, 3, 2, 4};

  swap(1, 2, arr);

  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_3_should_become_3(void)
{
  int arr[1] = {3};
  int expecArr[1] = {3};
  quickSort(0, 0, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_2_1_should_become_1_2(void)
{
  int arr[2] ={2, 1};
  int expecArr[2] = {1, 2};
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

//first pivot as smallest number
void test_quickSort_given_3_16_11_17_8_should_become_3_8_11_16_17(void)
{
  int arr[5] = {3, 16, 11, 17, 8};
  int expecArr[5] = {3, 8, 11, 16, 17};
  quickSort(0, 4, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

//first pivot as largest number
void test_quickSort_given_14_9_7_8_3_should_become_3_7_8_9_14(void)
{
  int arr[5] = {14, 9, 7, 8, 3};
  int expecArr[5] = {3, 7, 8, 9, 14};
  quickSort(0, 4, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_8_8_9_8_3_should_become_3_8_8_8_9(void)
{
  int arr[5] = {8, 8, 9, 8, 3};
  int expecArr[5] = {3, 8, 8, 8, 9};
  quickSort(0, 4, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_9_8_8_9_3_should_become_3_8_8_9_9(void)
{
  int arr[5] = {9, 8, 8, 9, 3};
  int expecArr[5] = {3, 8, 8, 9, 9};
  quickSort(0, 4, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_minus1_8_8_9_3_should_become_minus1_3_8_8_9(void)
{
  int arr[5] = {-1, 8, 8, 9, 3};
  int expecArr[5] = {-1, 3, 8, 8, 9};
  quickSort(0, 4, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_minus1_8_8_minus7_3_should_become_minus7_minus1_3_8_8(void)
{
  int arr[5] = {-1, 8, 8, -7, 3};
  int expecArr[5] = {-7, -1, 3, 8, 8};
  quickSort(0, 4, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}

void test_quickSort_given_16_minus3_7_8_0_minus9_14_8_100_9_should_become_minus9_minus3_0_7_8_8_9_14_16_100(void)
{
  int arr[10] = {16, -3, 7, 8, 0, -9, 14, 8, 100, 9};
  int expecArr[10] = {-9, -3, 0, 7, 8, 8, 9, 14, 16, 100};
  quickSort(0, 9, arr);
  TEST_ASSERT_EQUAL_ARRAY(expecArr, arr);
}