#include <iostream> 
#include <string>
#include "ClassAutobots.h"
#include "ClassTransformers.h"
#include "ClassWeapon.h"



Autobot::Autobot(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump): Transformer(name, power, hp, stamina, x, y, alive, injured, lr, jump), _Weapon(*(new Weapon(100, 10))){}

void Autobot::transform(){
	std::cout<<"Success transformation to autobot!!!";
}