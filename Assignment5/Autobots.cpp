/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 5
*/
#include "Autobots.h"


// class Autobot
Autobot::Autobot(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int bright): Transformer(name, power, hp, stamina, x, y, alive, injured, lr, jump),  _ArmorGlowBrightness(bright){}
Autobot::Autobot(int power, int hp, int bright): Transformer(power, hp), _ArmorGlowBrightness(bright)
{
	
}

// methods
void Autobot::transform() const
{
	std::cout << "Method: transform, Class: Autobot" << std::endl;
}

void Autobot::ability() const
{
	std::cout << "Method: ability, Class: Autobot" << std::endl;
}

void Autobot::ulta() const
{
	std::cout << "Method: ulta, Class: Autobot" << std::endl;
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