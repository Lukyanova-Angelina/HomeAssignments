/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
*/
#ifndef BULLET
#define BULLET
#include <iostream>
#include <string>

class Bullet
{
private:
    int X, Y;
    bool _LookRight;
public:
    Bullet(int x, int y, bool lr);
    Bullet();
    ~Bullet();

    void Bump();
    void Move();

    void setX(int x);
    void setY(int y);

    int getX();
    int getY();
    bool getLookRight();

};
std::ostream & operator<<(std::ostream & os, Bullet& n);
#endif