/*
Lukyanova Angelina st128743@student.spbu.ru
Problem 6
*/
#include "gtest/gtest.h"
#include "main.h"

// tests for Class1
TEST(Class1Test, NumberIsPositive)
{
    Class1 obj;
    std::vector<float> data;
    EXPECT_TRUE(obj.bar(1, data));
}

TEST(Class1Test, NumberIsNotPositive)
{
    Class1 obj;
    std::vector<float> data;
    EXPECT_FALSE(obj.bar(0, data));
    EXPECT_FALSE(obj.bar(-1, data));
}

// tests for Class2
TEST(Class2Test, VectorISNotEmpty)
{
    Class2 obj;
    std::vector<float> data{1.0f};
    EXPECT_TRUE(obj.bar(0, data));
}

TEST(Class2Test, VectorIsEmpty)
{
    Class2 obj;
    std::vector<float> data;
    EXPECT_FALSE(obj.bar(0, data));
}

// tests for Class3
TEST(Class3Test, SizeMatchesCondition)
{
    Class3 obj;
    std::vector<float> data{-1.0f, -2.0f, -3.0f};
    EXPECT_TRUE(obj.bar(-3, data));
}

TEST(Class3Test, SizeDoesNotMatchCondition)
{
    Class3 obj;
    std::vector<float> data{-1.0f, -2.0f, -3.0f};
    EXPECT_FALSE(obj.bar(-4, data));
}

// tests for TemplateClass
TEST(TemplateClassTest, SpecializationInt)
{
    int zero = 0;
    TemplateClass<int> obj(zero);
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, SpecializationDouble)
{
    double zero = 0.0;
    TemplateClass<double> obj(zero);
    EXPECT_FALSE(obj.foo());
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}