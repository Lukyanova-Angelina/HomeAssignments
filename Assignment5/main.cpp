/* 
Lukyanova Angelina st128743@student.spbu.ru
Problem 5
*/
#include <iostream>
#include <string>
#include "Transformers.h"
#include "Decepticons.h"
#include "Autobots.h"
#include <vector>

int main(){
	Transformer a = Transformer(100, 100);
	Decepticon b = Decepticon(100, 10, 10, 10);
	Autobot c = Autobot(100, 10, 10);
	std::cout<<"Test Transformer methods"<<std::endl;
	a.transform();
	a.ability();
	a.ulta();
	std::cout<<std::endl<<"Test Decepticon methods"<<std::endl;
	b.transform();
	b.ability();
	b.ulta();
	std::cout<<std::endl<<"Test Autobot methods"<<std::endl;
	c.transform();
	c.ability();
	c.ulta();
	Transformer *ptr;
	std::cout<<std::endl<<"Test calling Decepticon methods through a pointer typed by the base class"<<std::endl;
	ptr = new Decepticon(100, 10, 10, 10);
	ptr->transform();
	ptr->ability();	
	ptr->ulta();	
	delete ptr;
	std::cout<<std::endl<<"Test calling Autobot methods through a pointer typed by the base class"<<std::endl;
	ptr = new Autobot(100, 10, 10);
	ptr->transform();									
	ptr->ability();	
	ptr->ulta();	
	delete ptr;
	std::vector<Transformer*> objects;
	for(int i = 0; i < 3; i++)
	{
		objects.push_back(new Transformer(100, 100));
		objects.push_back(new Decepticon(100, 100, 10, 10));
		objects.push_back(new Autobot(100, 100, 10));
	}
	for(auto bot : objects)
	{
		std::cout<<std::endl<<typeid(*bot).name()<<std::endl;
		bot->transform();
		bot->ability();
		bot->ulta();
	}
	for (auto bot : objects) {
		delete bot;
	}
	return 0;
}