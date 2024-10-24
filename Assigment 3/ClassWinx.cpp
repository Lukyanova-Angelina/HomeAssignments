#include <iostream> 
#include <string>
#include "ClassAutobots.h"
#include "ClassTransformers.h"
#include "ClassWeapon.h"
#include "ClassDecepticons.h"
#include "ClassWinx.h"



Winx::Winx(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, std::string color, int speed): Transformer(name, power, hp, stamina, x, y, alive, injured, lr, jump), _Color_of_Wings(color), _Speed(speed), _Weapon(*(new Weapon(100, 10))){}

void Winx::transform(){
	std::cout<<"Success transformation to WINX!!!";
}


void Winx::teleport(){
	setX(getX() + 10);
}

void Winx::setColor_of_wings(std::string color){
	_Color_of_Wings = color;

}
void Winx::setSpeed(int sp){
	_Speed = sp;
}

int Winx::getSpeed(){
	return _Speed;
}
std::string Winx::getColor_of_wings(){
	return _Color_of_Wings;
}