#include "pch.h"
#include "../JenkinsTest/TestHeader.h"
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
TEST(JenkinsCase, FunctionTest)
{
	EXPECT_EQ(1, testFunction());
}