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

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, zzz_repeats)
{
    Practice testObject;
    ASSERT_EQ(testObject.count_starting_repeats("zzz"),3);
}

TEST(PracticeTest, redeem_repeats)
{
    Practice testObject;
    ASSERT_EQ(testObject.count_starting_repeats("redeem"),1);
}

TEST(PracticeTest, no_repeats)
{
    Practice testObject;
    ASSERT_EQ(testObject.count_starting_repeats("no"),1);
}

TEST(PracticeTest, aaaaba_repeats)
{
    Practice testObject;
    ASSERT_EQ(testObject.count_starting_repeats("aaaaba"),4);
}

TEST(PracticeTest, outOfOrder)
{
    Practice testObject;
    int a = 55;
    int b = 99;
    int c = 2;
    testObject.sortDescending(a, b, c);
    ASSERT_EQ(a, 99);
    ASSERT_EQ(b, 55);
    ASSERT_EQ(c, 2);
}

TEST(PracticeTest, ascending)
{
    Practice testObject;
    int a = 1;
    int b = 2;
    int c = 3;
    testObject.sortDescending(a, b, c);
    ASSERT_EQ(a, 3);
    ASSERT_EQ(b, 2);
    ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sameNumber)
{
    Practice testObject;
    int a = 5;
    int b = 5;
    int c = 5;
    testObject.sortDescending(a, b, c);
    ASSERT_EQ(a, 5);
    ASSERT_EQ(b, 5);
    ASSERT_EQ(c, 5);
}

TEST(PracticeTest, racecar)
{
    Practice testObject;
    ASSERT_TRUE(testObject.isPalindrome("racecar"));
}

TEST(PracticeTest, notAPalindrome)
{
    Practice testObject;
    ASSERT_FALSE(testObject.isPalindrome("not"));
}
