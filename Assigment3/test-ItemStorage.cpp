/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#include <gtest/gtest.h>
#include "ItemStorage.h"

class ItemStorageTest : public ::testing::Test
{
protected:
    ItemStorage* storage;

    void SetUp() override
    {
        storage = new ItemStorage(555);
    }

    void TearDown() override
    {
        delete storage;
    }
};

// test constructor
TEST_F(ItemStorageTest, ConstructorTest)
{
    EXPECT_EQ(storage->getsizeofWeaponStorage(), 555);
}

TEST_F(ItemStorageTest, AddWeaponTest)
{
    EXPECT_OUTPUT(storage->addWeapon(*Weapon(100, 10)), "added Weapon");
}

TEST_F(ItemStorageTest, DeleteWeaponTest)
{
    EXPECT_OUTPUT(storage->deleteWeapon(0), "deleted Weapon");
}

