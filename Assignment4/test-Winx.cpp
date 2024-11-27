/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#include <gtest/gtest.h>
#include "Winx.h"

class WinxTest : public ::testing::Test
{
protected:
    Winx* winx;

    void SetUp() override
    {
        winx = new Winx("Optimus Prime", 100, 200, 150, 0, 0, true, false, true, true, "pink", 100);
    }

    void TearDown() override
    {
        delete winx;
    }
};

// test constructor
TEST_F(WinxTest, ConstructorTest)
{
    EXPECT_EQ(winx->getPower(), 100);
    EXPECT_EQ(winx->getHP(), 200);
    EXPECT_EQ(winx->getStamina(), 150);
    EXPECT_TRUE(winx->getAlive());
    EXPECT_FALSE(winx->getInjured());
    EXPECT_TRUE(winx->getLookright());
    EXPECT_TRUE(winx->getJump());
    EXPECT_EQ(winx->getColor_of_wings(), "pink");
    EXPECT_EQ(winx->getSpeed(), 100);
}


// test transform()
TEST_F(WinxTest, TransformTest)
{
    testing::internal::CaptureStdout();
    winx->transform(); // Вызываем метод
    std::string output = testing::internal::GetCapturedStdout(); // Захват вывода
    ASSERT_STREQ(output.c_str(), "Success transformation to WINX!!!"); // Сравниваем вывод
}



// test teleport()
TEST_F(WinxTest, teleportTest)
{
    int initialX = winx->getX();
    winx->teleport();
    EXPECT_EQ(initialX + 10, winx->getX());
}

TEST_F(WinxTest, Color_of_wingsTest)
{
    winx->setColor_of_wings("black");
    EXPECT_EQ("black", winx->getColor_of_wings());

}

TEST_F(WinxTest, SpeedTest)
{
    winx->setSpeed(555);
    EXPECT_EQ(555, winx->getSpeed());
}

