#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{
    /**
     * TODO: Replace the line below with your code here as described above to verify your /conf/username.txt 
     * config file and my_username() functions are setup properly
     */
    //TEST_ASSERT_TRUE_MESSAGE(false,"AESD students, please fix me!");
    
        // 調用 my_username() 函數獲取硬編碼的用戶名
    const char* expected_username = my_username();
    
    // 調用 malloc_username_from_conf_file() 獲取配置文件中的用戶名
    char* actual_username = malloc_username_from_conf_file();
    
    // 使用 Unity 斷言來驗證這兩個字符串是否相等
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected_username, actual_username, "Usernames do not match!");

    // 釋放從 malloc_username_from_conf_file 獲得的內存
    free(actual_username);
     
}
