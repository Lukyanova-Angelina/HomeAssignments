#include <iostream> 
#include <string>
#include "ClassAutobots.h"
#include "ClassTransformers.h"
#include "ClassWeapon.h"

// конструкторы и деструкторы
Transformer::Transformer(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump): _Weapon(*(new Weapon(100, 10)))
{
    _Name = name; 
    _Power = power; 
    _HP = hp; 
    _Stamina = stamina;
    X = x;
    Y = y;
    _Is_alive = alive;
    _Is_injured = injured;
    _Look_right = lr; 
    _Is_jump = jump;
    }

Transformer::~Transformer(){
	delete &_Weapon;
};

// methods
void Transformer::Move(){
	if(getLookright() == 1){
		setX(getX() + 1);
	}else{
		setX(getX() - 1);
	}
};
	
void Transformer::Jump(){
	if (getJump() == 1){
		setY(getY() + 1);
	}else{
		setY(getY() - 1);
	}
}
void Transformer::Turn(){
	if (getLookright() == 1){
		setLookright(0);
	}else{
		setLookright(1);
	}
}

// Sets
void Transformer::setPower(int power){
	_Power = power;
}
void Transformer::setHP(int hp){
	_HP = hp;
}
void Transformer::setStamina(int stamina){
	_Stamina = stamina;
}
void Transformer::setAlive (bool is_alive){
	_Is_alive = is_alive;
}
void Transformer::setInjured (bool is_injured){
	_Is_injured = is_injured;
}
void Transformer::setX(int x){
	X = x;
}
void Transformer::setY(int y){
	Y = y;
}
void Transformer::setLookright(bool lr){
	_Look_right = lr;
}
void Transformer::setJump(bool jump){
	_Is_jump = jump;
}

// Gets 
int Transformer::getPower(){
	return _Power;
}
int Transformer::getHP(){
	return _HP;
}
int Transformer::getStamina(){
	return _Stamina;
}
int Transformer::getX(){
	return X;
}
int Transformer::getY(){
	return Y;
}
bool Transformer::getAlive(){
	return _Is_alive;
}
bool Transformer::getInjured(){
	return _Is_injured;
}
bool Transformer::getLookright(){
	return _Look_right;
}
bool Transformer::getJump(){
	return _Is_jump;
}
/*
void Transformer::info(){
	std::cout<< _Name << " " <<_HP << " " <<_Power << " " <<_Is_alive <<std::endl;
}
*/