#include <iostream> 
#include <string>

#include "ClassAutobots.h"
#include "ClassTransformers.h"
#include "ClassWeapon.h"

#include "ClassDecepticons.h"


Decepticon::Decepticon(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int rang, int flight_altitude): Transformer(name, power, hp, stamina, x, y, alive, injured, lr, jump), _Rang(rang), _Flight_altitude(flight_altitude), _Weapon(*(new Weapon(100, 10))){}
void Decepticon::transform(){
	std::cout<<"Success transformation to Decepticon!!!";
}
void Decepticon::fly(){
	std::cout<<"Lets fly!!!"<<std::endl;
}

void Decepticon::setRang(int rang){
	_Rang = rang;
}
void Decepticon::set_Flight_altitude(int fa){
	_Flight_altitude = fa;
}

int Decepticon::getRang(){
	return _Rang;
}
int Decepticon::get_Flight_altitude(){
	return _Flight_altitude;
}
