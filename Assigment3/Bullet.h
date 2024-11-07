/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#ifndef CLASSBULLET
#define CLASSBULLET
#include <iostream>
#include <string>

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