/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;/$#");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_not_descending_1)
{
	int one = 1;
	int two = 2;
	int three = 3;
    Practice obj;
    bool actual = obj.sortDescending(two, three, one);
	ASSERT_TRUE(actual);
	ASSERT_EQ(3, two);
    ASSERT_EQ(2, three);
    ASSERT_EQ(1, one);
}

TEST(PracticeTest, is_not_descending_2)
{
	int one = 1;
	int two = 2;
	int three = 3;
    Practice obj;
    bool actual = obj.sortDescending(one, two, three);
    ASSERT_TRUE(actual);
	ASSERT_EQ(1, three);
    ASSERT_EQ(2, two);
    ASSERT_EQ(3, one);
}
TEST(PracticeTest, is_not_descending_3)
{
	int one = 1;
	int two = 3;
	int three = 3;
    Practice obj;
    bool actual = obj.sortDescending(one, three, two);
	ASSERT_TRUE(actual);
	ASSERT_EQ(1, two);
    ASSERT_EQ(3, three);
    ASSERT_EQ(3, one);
}

TEST(PracticeTest, is_descending)
{
	int one = 1;
	int two = 2;
	int three = 3;
    Practice obj;
    bool actual = obj.sortDescending(three, two, one);
    ASSERT_EQ(1, one);
    ASSERT_EQ(2, two);
    ASSERT_EQ(3, three);
	ASSERT_TRUE(actual);
}