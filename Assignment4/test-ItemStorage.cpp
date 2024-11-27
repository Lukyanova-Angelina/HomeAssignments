/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#include <gtest/gtest.h>
#include <sstream>
#include <iostream>
#include "ItemStorage.h"

class ItemStorageTest : public ::testing::Test
{
protected:
    ItemStorage* storage;
    Weapon* weapon;
    std::ostringstream output_stream;
    std::streambuf* original_buf;

    void SetUp() override
    {
        storage = new ItemStorage(555);
        weapon = new Weapon(100, 10);

        
        original_buf = std::cout.rdbuf();
        
        
        output_stream.str("");
        std::cout.rdbuf(output_stream.rdbuf());
    }

    void TearDown() override
    {

        std::cout.rdbuf(original_buf);

        delete storage;
        delete weapon;
    }
};

// test constructor
TEST_F(ItemStorageTest, ConstructorTest)
{
    EXPECT_EQ(storage->getsizeofWeaponStorage(), 555);
}

TEST_F(ItemStorageTest, AddWeaponTest)
{
    storage->addWeapon(weapon);
    EXPECT_EQ(output_stream.str(), "added Weapon");
}

TEST_F(ItemStorageTest, DeleteWeaponTest)
{   
    storage->deleteWeapon(0); 
    EXPECT_EQ(output_stream.str(), "deleted Weapon");
}
