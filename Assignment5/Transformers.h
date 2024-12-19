/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 5
*/
#ifndef TRANSFORMERS
#define TRANSFORMERS
#include <iostream>
#include <string>


class Transformer
{
private:
    std::string _Name;
    int _Power, _HP, _Stamina, X, Y;
    bool _Is_alive, _Is_injured, _Look_right, _Is_jump;

public:
    // Constructor and destructor
    Transformer(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump);
    Transformer(int power, int hp);
    virtual ~Transformer();

    // methods
    void Move();
    void Jump();
    void Turn();
    virtual void transform() const;
    virtual void ability() const;
    virtual void ulta() const;
    bool operator==(Transformer& b);
    bool operator>(Transformer& b);
    bool operator<(Transformer& b);
    bool operator>=(Transformer& b);
    bool operator<=(Transformer& b);
    bool operator!=(Transformer& b);


    // Sets
    void setPower(int power);
    void setHP(int hp);
    void setStamina(int stamina);
    void setAlive (bool is_alive);
    void setInjured (bool is_injured);
    void setX(int x);
    void setY(int y);
    void setLookright(bool lr);
    void setJump(bool jump);

    // Gets
    std::string getName();
    int getPower();
    int getHP();
    int getStamina();
    int getX();
    int getY();
    bool getAlive();
    bool getInjured();
    bool getLookright();
    bool getJump();

};

std::ostream & operator<<(std::ostream & os, Transformer& n);
#endif