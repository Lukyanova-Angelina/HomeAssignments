/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 5
*/
#include "Decepticons.h"


Decepticon::Decepticon(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump, int rang, int fl): Transformer(name, power, hp, stamina, x, y, alive, injured, lr, jump), _Rang(rang), _Flight_altitude(fl)
{
}
Decepticon::Decepticon(int power, int hp, int rang, int fl): Transformer(power, hp),  _Rang(rang), _Flight_altitude(fl)
{
}
void Decepticon::transform() const
{
    std::cout << "Method: transform, Class: Decepticon" << std::endl;
}

void Decepticon::ability() const
{
    std::cout << "Method: ability, Class: Decepticon" << std::endl;
}

void Decepticon::ulta() const
{
    std::cout << "Method: ulta, Class: Decepticon" << std::endl;
}
void Decepticon::fly()
{
    std::cout<<"Lets fly!!!"<<std::endl;
}

void Decepticon::setRang(int rang)
{
    _Rang = rang;
}
void Decepticon::set_Flight_altitude(int fa)
{
    _Flight_altitude = fa;
}

int Decepticon::getRang()
{
    return _Rang;
}
int Decepticon::get_Flight_altitude()
{
    return _Flight_altitude;
}
