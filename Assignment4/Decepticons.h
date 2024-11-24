/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 4
*/
#ifndef DECEPTICONS
#define DECEPTICONS
#include "Transformers.h"

class Decepticon: public Transformer
{
private:
    std::string _Name;
    int _Power, _HP, _Stamina, X, Y;
    bool _Is_alive, _Is_injured, _Look_right, _Is_jump;
    Weapon& _Weapon;
    int _Rang;
    int _Flight_altitude;
    ItemStorage& _Storage;


public:
    Decepticon(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int rang, int flight_altitude);
    Decepticon(int power, int hp, int rang, int flight_altitude);
    void transform();
    void fly();

    void setRang(int rang);
    void set_Flight_altitude(int fa);

    int getRang();
    int get_Flight_altitude();
};
#endif
