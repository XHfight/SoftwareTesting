/*************************************************************************
	> File Name: test.cpp
	> Author: XH
	> Mail: X_H_fight@163.com 
	> Created Time: 二  8/ 1 12:34:08 2017
 ************************************************************************/

#include<gtest/gtest.h>

//负数
TEST(Abs, negative)
{
	ASSERT_TRUE(abs(-1)==1);
	ASSERT_TRUE(abs(-2)!=2);  //故意构造错误的结果
}

//正数
TEST(Abs, positive)
{
	ASSERT_TRUE(abs(1) == 1); 
}

