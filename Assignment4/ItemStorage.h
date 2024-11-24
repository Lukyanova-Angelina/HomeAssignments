/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
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
    ItemStorage(int sizeofWeaponStorage);
    ItemStorage();
    ~ItemStorage();

    int getsizeofWeaponStorage();

    void addWeapon(Weapon* weapon);
    void deleteWeapon(int index);

};

#endif