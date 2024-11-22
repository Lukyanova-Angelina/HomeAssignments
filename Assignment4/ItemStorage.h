/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#ifndef ITEMSTORAGE
#define ITEMSTORAGE
#include "Weapon.h"

class ItemStorage
{
private:
    Weapon** WeaponStorage;
    int sizeofWeaponStorage;

public:
    ItemStorage(int sizeofWeaponStorage = 10);
    ~ItemStorage();

    int getsizeofWeaponStorage();

    void addWeapon(Weapon* weapon);
    void deleteWeapon(int index);

};

#endif