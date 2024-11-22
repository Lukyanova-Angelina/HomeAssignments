/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#include "ItemStorage.h"

ItemStorage::ItemStorage(int sizeofWeaponStorage) {
    this->sizeofWeaponStorage = sizeofWeaponStorage;
    WeaponStorage = new Weapon*[sizeofWeaponStorage];
    for (int i = 0; i < sizeofWeaponStorage; ++i) {
        WeaponStorage[i] = nullptr;
    }
}

ItemStorage::~ItemStorage() {
    for (int i = 0; i < sizeofWeaponStorage; ++i) {
        delete WeaponStorage[i];
    }
    delete[] WeaponStorage;
}

int ItemStorage::getsizeofWeaponStorage() {
    return sizeofWeaponStorage;
}

void ItemStorage::addWeapon(Weapon* weapon) {
    std::cout<<"added Weapon";
}

void ItemStorage::deleteWeapon(int index) {
    std::cout<<"deleted Weapon";
}