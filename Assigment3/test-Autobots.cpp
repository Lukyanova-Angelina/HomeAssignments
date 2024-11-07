/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#include <iostream>
#include <string>
#include "ClassAutobots.h"
#include "ClassBullet.h"
#include "ClassTransformers.h"
#include "ClassWeapon.h"
#include <gtest/gtest.h>
class AutobotTest : public ::testing::Test
{
protected:
    Autobot* testBot;

    void SetUp() override
    {
        //make object
        testBot = new Autobot("C-3PO", 50, 100, 80, 0, 0, true, false, true, true, 20);
    }

    void TearDown() override
    {
        delete testBot;
    }
};

// test constructor
TEST_F(AutobotTest, ConstructorTest)
{
    EXPECT_EQ(testBot->getPower(), 50);
    EXPECT_EQ(testBot->getHP(), 100);
    EXPECT_EQ(testBot->getStamina(), 80);
    EXPECT_TRUE(testBot-> getAlive());
    EXPECT_FALSE(testBot->getInjured());
    EXPECT_TRUE(testBot->getLookright());
    EXPECT_TRUE(testBot->getJump());
    EXPECT_EQ(testBot->getArmorGlowBrightness(), 20);
}

// test transform()
TEST_F(AutobotTest, TransformTest)
{
    testing::internal::CaptureStdout();
    testBot->transform();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_STREQ(output.c_str(), "Success transformation to autobot!!!");
}

// test Dig()
TEST_F(AutobotTest, DigTest)
{
    int initialY = testBot->getY();
    testBot->Dig();
    EXPECT_EQ(initialY - 1, testBot->getY()); // Проверяем изменение координаты Y
}

// test set/get ArmorGlowBrightness
TEST_F(AutobotTest, ArmorGlowTest)
{
    int brightness = 30;
    testBot->setArmorGlowBrightness(brightness);
    EXPECT_EQ(brightness, testBot->getArmorGlowBrightness());
}
