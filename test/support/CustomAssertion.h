#ifndef CustomAssertion_H
#define CustomAssertion_H
#include "unity.h"
#include <stdarg.h>

// ... can represent any arguement.
#define CUSTOM_TEST_FAIL(lineNo, msg, ...)                                         \
                {                                                                  \
                char buffer[256];                                                  \
                sprintf(buffer, msg, ## __VA_ARGS__);                              \
                UNITY_TEST_FAIL(lineNo,buffer);                                    \
                }

#define TEST_ASSERT_EQUAL_ARRAY(expectedArray, actualArray);                       \
        customTestArray(expectedArray, actualArray, __LINE__);
         
void customTestArray(int *expectedArray, int *actualArray, int lineNumber);

#endif // CustomAssertion_H
