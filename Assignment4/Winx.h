/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
*/
#ifndef CLASSWINX
#define CLASSWINX
#include <iostream>
#include <string>
#include "Transformers.h"


class Winx: public Transformer
{
private:
    std::string _Name;
    int _Power, _HP, _Stamina, X, Y;
    bool _Is_alive, _Is_injured, _Look_right, _Is_jump;
    Weapon& _Weapon;
    std::string _Color_of_Wings;
    int _Speed;
    ItemStorage& _Storage;


public:
    Winx(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, std::string color_of_wings, int speed);
    Winx(int power, int hp, std::string color_of_wings, int speed);
    void transform();
    void teleport();

    void setColor_of_wings(std::string color);
    void setSpeed(int sp);

    int getSpeed();
    std::string getColor_of_wings();


};
#endif
