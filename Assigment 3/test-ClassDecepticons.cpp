#include <gtest/gtest.h>
#include "ClassDecepticons.h"

class DecepticonTest : public ::testing::Test {
protected:
    Decepticon* decepticon;

    void SetUp() override {
        decepticon = new Decepticon("R2-D2", 100, 200, 150, 0, 0, true, false, true, true, 1, 42);
    }

    void TearDown() override {
        delete decepticon;
    }
};

// Тестирование конструктора
TEST_F(DecepticonTest, ConstructorTest) {
    EXPECT_EQ(decepticon->getPower(), 100);
    EXPECT_EQ(decepticon->getHP(), 200);
    EXPECT_EQ(decepticon->getStamina(), 150);
    EXPECT_TRUE(decepticon->getAlive());
    EXPECT_FALSE(decepticon->getInjured());
    EXPECT_TRUE(decepticon->getLookright());
    EXPECT_TRUE(decepticon->getJump());
    EXPECT_EQ(decepticon->getRang(), 1);
    EXPECT_EQ(decepticon->get_Flight_altitude(), 42);
}



// Тестируем метод transform()
TEST_F(DecepticonTest, TransformTest) {   
    testing::internal::CaptureStdout();
    decepticon->transform(); // Вызываем метод
    std::string output = testing::internal::GetCapturedStdout(); // Захват вывода
    ASSERT_STREQ(output.c_str(), "Success transformation to Decepticon!!!"); // Сравниваем вывод
}




TEST_F(DecepticonTest, RangTest) {
    decepticon->setRang(451);
    EXPECT_EQ(451, decepticon->getRang());

}

TEST_F(DecepticonTest, SpeedTest) {
    decepticon->set_Flight_altitude(15);
    EXPECT_EQ(15, decepticon->get_Flight_altitude());
}
/*
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/