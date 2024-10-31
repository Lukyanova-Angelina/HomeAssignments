#include <gtest/gtest.h>
#include "ClassWeapon.h"

class WeaponTest : public ::testing::Test {
protected:
    Weapon* weapon;

    void SetUp() override {
        weapon = new Weapon(100, 150);
    }

    void TearDown() override {
        delete weapon;
    }
};

// test constructor
TEST_F(WeaponTest, ConstructorTest) {
    EXPECT_EQ(weapon->getDamage(), 100);
    EXPECT_EQ(weapon->getDistance(), 150);
}

// test set/get Distance
TEST_F(WeaponTest, DistanceTest) {
    int dist = 120;
    weapon->setDistance(dist);
    EXPECT_EQ(dist, weapon->getDistance());
}

// test set/get Damage
TEST_F(WeaponTest, DamageTest) {
    int dmg = 170;
    weapon->setDamage(dmg);
    EXPECT_EQ(dmg, weapon->getDamage());
}
