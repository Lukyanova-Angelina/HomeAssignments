#ifndef CLASSWEAPON
#define CLASSWEAPON
#include <iostream>

class Weapon{
private:
	int _Damage, _Distance;
public:
	Weapon(int damage, int dist);
	~Weapon();

	// Gets
	int getDamage();
	int getDistance();

	// Sets
	void setDamage(int dmg);
	void setDistance(int dist);
};

#endif