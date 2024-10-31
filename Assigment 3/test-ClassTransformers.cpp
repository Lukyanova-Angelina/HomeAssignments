#include <gtest/gtest.h>
#include "ClassTransformers.h"

class TransformerTest : public ::testing::Test {
protected:
    Transformer* transformer;

    void SetUp() override {
        transformer = new Transformer("Optimus Prime", 100, 200, 150, 0, 0, true, false, true, true);
    }

    void TearDown() override {
        delete transformer;
    }
};

// test constructor
TEST_F(TransformerTest, ConstructorTest) {
    EXPECT_EQ(transformer->getPower(), 100);
    EXPECT_EQ(transformer->getHP(), 200);
    EXPECT_EQ(transformer->getStamina(), 150);
    EXPECT_TRUE(transformer->getAlive());
    EXPECT_FALSE(transformer->getInjured());
    EXPECT_TRUE(transformer->getLookright());
    EXPECT_TRUE(transformer->getJump());
}

// test Move()
TEST_F(TransformerTest, MoveTest) {
    int initialX = transformer->getX();
    transformer->Move();
    EXPECT_EQ(initialX + 1, transformer->getX()); // Проверяем движение вправо
    transformer->setLookright(false);
    transformer->Move();
    EXPECT_EQ(initialX, transformer->getX()); // Проверяем движение влево
}

//test Jump()
TEST_F(TransformerTest, JumpTest) {
    int initialY = transformer->getY();
    transformer->Jump();
    EXPECT_EQ(initialY + 1, transformer->getY()); // Проверяем прыжок вверх
    transformer->Jump();
    EXPECT_EQ(initialY, transformer->getY()); // Проверяем отсутствие прыжка вниз
}


// test Turn()
TEST_F(TransformerTest, TurnTest) {
    bool initialLR = transformer->getLookright();
    transformer->Turn();
    EXPECT_NE(initialLR, transformer->getLookright()); // Проверяем поворот
}

// test ShootABullet()
TEST_F(TransformerTest, ShootABulletTest) {
    // Поскольку Bullet создается локально, проверка может заключаться в проверке наличия соответствующих параметров
    // Например, можно добавить логику в Bullet для отслеживания создания экземпляров
}

// test set/get Power
TEST_F(TransformerTest, PowerTest) {
    int newPower = 120;
    transformer->setPower(newPower);
    EXPECT_EQ(newPower, transformer->getPower());
}

// test set/get HP
TEST_F(TransformerTest, HpTest) {
    int newHP = 250;
    transformer->setHP(newHP);
    EXPECT_EQ(newHP, transformer->getHP());
}

// test set/get Stamina
TEST_F(TransformerTest, StaminaTest) {
    int newStamina = 180;
    transformer->setStamina(newStamina);
    EXPECT_EQ(newStamina, transformer->getStamina());
}

// test set/get Alive
TEST_F(TransformerTest, AliveTest) {
    bool newAlive = false;
    transformer->setAlive(newAlive);
    EXPECT_EQ(newAlive, transformer->getAlive());
}

// test set/get Injured
TEST_F(TransformerTest, InjuredTest) {
    bool newInjured = true;
    transformer->setInjured(newInjured);
    EXPECT_EQ(newInjured, transformer->getInjured());
}

// test set/get X
TEST_F(TransformerTest, XTest) {
    int newX = 10;
    transformer->setX(newX);
    EXPECT_EQ(newX, transformer->getX());
}

// test set/get Y
TEST_F(TransformerTest, YTest) {
    int newY = 15;
    transformer->setY(newY);
    EXPECT_EQ(newY, transformer->getY());
}

// test set/get Lookright
TEST_F(TransformerTest, LookRightTest) {
    bool newLR = false;
    transformer->setLookright(newLR);
    EXPECT_EQ(newLR, transformer->getLookright());
}

// test set/get Jump
TEST_F(TransformerTest, JumpsTest) {
    bool newJump = false;
    transformer->setJump(newJump);
    EXPECT_EQ(newJump, transformer->getJump());
}
