#ifndef CLASSTRANSFORMERS
#define CLASSTRANSFORMERS
#include <iostream> 
#include <string>
#include "ClassWeapon.h"
#include "ClassBullet.h"

class Transformer
{
private:
	// это поля
	std::string _Name;
	int _Power, _HP, _Stamina, X, Y;
	bool _Is_alive, _Is_injured, _Look_right, _Is_jump;
	Weapon& _Weapon;

public:
	// Конструктор и деструктор
	Transformer(std::string name, int power, int hp, int stamina, int x, int y, bool alive, bool injured, bool lr, bool jump);
	~Transformer();

	// методы
	void Move();
	void Jump();
	void Turn();
	void ShootABullet();

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
#endif