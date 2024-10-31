#ifndef CLASSAUTOBOTS
#define CLASSAUTOBOTS
#include <iostream> 
#include <string>
#include "ClassTransformers.h"



class Autobot: public Transformer {
private:
	std::string _Name;
	int _Power, _HP, _Stamina, X, Y;
	bool _Is_alive, _Is_injured, _Look_right, _Is_jump;
	Weapon& _Weapon;
	int _ArmorGlowBrightness;

public: 
	Autobot(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int bright);
//methods 
	void transform();
	void Dig();
//sets
	void setArmorGlowBrightness(int pr);
//gets
	int getArmorGlowBrightness();
};
#endif
