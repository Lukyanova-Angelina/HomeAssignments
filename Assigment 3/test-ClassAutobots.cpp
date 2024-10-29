
#include <iostream> 
#include <string>
#include "ClassAutobots.h"
#include "ClassBullet.h"
#include "ClassTransformers.h"
#include "ClassWeapon.h"
#include <gtest/gtest.h>
class AutobotTest : public ::testing::Test {
protected:
    Autobot* testBot;
    
    void SetUp() override {
        // Создаем объект Autobot перед каждым тестом
        testBot = new Autobot("Bumblebee", 50, 100, 80, 0, 0, true, false, true, true, 20);
    }

    void TearDown() override {
        delete testBot; // Удаляем объект после каждого теста
    }
};

// Тестирование конструктора
TEST_F(AutobotTest, ConstructorTest) {
    EXPECT_EQ(testBot->getPower(), 50);
    EXPECT_EQ(testBot->getHP(), 100);
    EXPECT_EQ(testBot->getStamina(), 80);
    EXPECT_TRUE(testBot-> getAlive());
    EXPECT_FALSE(testBot->getInjured());
    EXPECT_TRUE(testBot->getLookright());
    EXPECT_TRUE(testBot->getJump());
    EXPECT_EQ(testBot->getArmorGlowBrightness(), 20); // Яркость свечения брони
}

// Тестируем метод transform()
TEST_F(AutobotTest, TransformTest) {   
    testing::internal::CaptureStdout();
    testBot->transform(); // Вызываем метод
    std::string output = testing::internal::GetCapturedStdout(); // Захват вывода
    ASSERT_STREQ(output.c_str(), "Success transformation to autobot!!!"); // Сравниваем вывод
}

// Тест метода Dig()
TEST_F(AutobotTest, DigTest) {  
    int initialY = testBot->getY();
    testBot->Dig();
    EXPECT_EQ(initialY - 1, testBot->getY()); // Проверяем изменение координаты Y
}

// Тест методов set/get ArmorGlowBrightness
TEST_F(AutobotTest, ArmorGlowTest) { 
    int brightness = 30;
    testBot->setArmorGlowBrightness(brightness);
    EXPECT_EQ(brightness, testBot->getArmorGlowBrightness());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}