/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 3
*/
#ifndef CLASSDECEPTICONS
#define CLASSDECEPTICONS
#include "ClassTransformers.h"

class Decepticon: public Transformer
{
private:
    std::string _Name;
    int _Power, _HP, _Stamina, X, Y;
    bool _Is_alive, _Is_injured, _Look_right, _Is_jump;
    Weapon& _Weapon;
    int _Rang, _Flight_altitude;

public:
    Decepticon(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int rang, int fl);
    void transform();
    void fly();

    void setRang(int rang);
    void set_Flight_altitude(int fa);

    int getRang();
    int get_Flight_altitude();
};
#endif
