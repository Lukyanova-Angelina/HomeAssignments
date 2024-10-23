#include <iostream> 
#include <string>
#include "ClassTransformers.h"
#include "ClassWeapon.h"
// конструкторы и деструкторы
Transformer::Transformer(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump){
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
    _Weapon = new Weapon(100, 10)}

Transformer::~Transformer(){
	delete _Weapon;
};

// methods
void Transformer::Move(){
	if(getLookright() == 1){
		setX(int getX() + 1);
	}else{
		setX(int getX() - 1);
	}
};
	
void Transformer::Jump(){
	if (getJump() == 1){
		setY(int getY() + 1);
	}else{
		setY(int getY() - 1);
	}
}
void Transformer::Turn(){
	if (getLookright == 1){
		setLookright(0);
	}else{
		setLookright(1);
	}
}

// Sets
void setPower(int power){
	_Power = power;
}
void setHP(int hp){
	_HP = hp;
}
void setStamina(int stamina){
	_Stamina = stamina;
}
void setAlive (bool is_alive){
	_Is_alive = is_alive;
}
void setInjured (bool is_injured){
	_Is_injured = is_injured;
}
void setX(int x){
	X = x;
}
void setY(int y){
	Y = y;
}
void setLookright(bool lr){
	_Look_right = lr;
}
void setJump(bool jump){
	_Is_jump = jump;
}

// Gets 
int getPower(){
	return _Power;
}
int getHP(){
	return _HP;
}
int getStamina(){
	return _Stamina;
}
int getX(){
	return X;
}
int getY(){
	return Y;
}
bool getAlive(){
	return _Is_alive;
}
bool getInjured(){
	return _Is_injured;
}
bool getLookright(){
	return _Look_right;
}
bool getJump(){
	return _Is_jump;
}