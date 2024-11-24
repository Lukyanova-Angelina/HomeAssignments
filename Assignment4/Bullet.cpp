/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
*/
#include "Bullet.h"
Bullet::Bullet(int x, int y, bool lr): X(x), Y(y), _LookRight(lr) {}
Bullet::Bullet():X(0), Y(0), _LookRight(true){}
Bullet::~Bullet() {}

void Bullet::Bump()
{
    Bullet::~Bullet();
}
void Bullet::Move()
{
    setX(getX() + getLookRight() * 2 - 1);
}

void Bullet::setX(int x)
{
    X = x;
}
void Bullet::setY(int y)
{
    Y = y;
}

int Bullet::getX()
{
    return X;
}
int Bullet::getY()
{
    return Y;
}
bool Bullet::getLookRight()
{
    return _LookRight;
}
