/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
*/
#include "Autobots.h"


// class Autobot
Autobot::Autobot(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int bright): Transformer(name, power, hp, stamina, x, y, alive, injured, lr, jump), _Weapon(*(new Weapon(100, 10))), _ArmorGlowBrightness(bright), _Storage(*(new ItemStorage())) {}
Autobot::Autobot(int power, int hp, int bright): Transformer(power, hp), _Weapon(*(new Weapon(100, 10))), _ArmorGlowBrightness(bright), _Storage(*(new ItemStorage())) {

}
// methods
void Autobot::transform()
{
    std::cout<<"Success transformation to autobot!!!";
}

void Autobot::Dig()
{
    setY(getY() - 1);
}
// set
void Autobot::setArmorGlowBrightness(int bright)
{
    _ArmorGlowBrightness = bright;
}
// get
int Autobot::getArmorGlowBrightness()
{
    return _ArmorGlowBrightness;
}