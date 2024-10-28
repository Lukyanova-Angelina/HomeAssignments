#ifndef CLASSBULLET
#define CLASSBULLET
#include <iostream> 
#include <string>
#include "ClassAutobots.h"
#include "ClassTransformers.h"
#include "ClassWeapon.h"
class Bullet
{
private: 
	int X, Y;
	bool _LookRight;
public:
	Bullet(int x, int y, bool lr);
	~Bullet();

	void Bump();
	void Move();

	void setX(int x);
	void setY(int y);

	int getX();
	int getY();
	bool getLookRight();

};

#endif