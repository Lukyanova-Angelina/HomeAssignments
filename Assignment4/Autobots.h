/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
*/
#ifndef AUTOBOTS
#define AUTOBOTS
#include <iostream>
#include <string>
#include "Transformers.h"



class Autobot: public Transformer
{
private:
    std::string _Name;
    int _Power, _HP, _Stamina, X, Y;
    bool _Is_alive, _Is_injured, _Look_right, _Is_jump;
    Weapon& _Weapon;
    int _ArmorGlowBrightness;
    ItemStorage& _Storage;


public:
    Autobot(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int bright);
    Autobot(int power, int hp, int bright);
//methods
    void transform();
    void Dig();
//sets
    void setArmorGlowBrightness(int pr);
//gets
    int getArmorGlowBrightness();
};
#endif
