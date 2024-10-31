#include <gtest/gtest.h>
#include "ClassBullet.h"

class BulletTest : public ::testing::Test {
protected:
    Bullet* bullet;

    void SetUp() override {
        bullet = new Bullet(0, 10, true);
    }

    void TearDown() override {
        delete bullet;
    }
};

// test constructor
TEST_F(BulletTest, ConstructorTest) {
    EXPECT_EQ(bullet->getX(), 0);
    EXPECT_EQ(bullet->getY(), 10);
    EXPECT_TRUE(bullet->getLookRight());

}

// test set/get X
TEST_F(BulletTest, XTest) {
    int x = 12;
    bullet->setX(x);
    EXPECT_EQ(x, bullet->getX());
}

// test set/get Y
TEST_F(BulletTest, YTest) {
    int y = 155;
    bullet->setY(y);
    EXPECT_EQ(y, bullet->getY());
}

TEST_F(BulletTest, LookRightTest) {
    EXPECT_TRUE(bullet->getLookRight());
}

TEST_F(BulletTest, MoveTest){
    int x = bullet -> getX();
    bullet -> Move();
    EXPECT_EQ(x + 2 * bullet -> getLookRight() - 1, bullet -> getX());

}

/*
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/
