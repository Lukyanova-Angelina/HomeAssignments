#include <iostream>

#include "Transformers.h"

/*
bool operator==(Transformer a, Transformer b)
{
    return a.getPower() == b.getPower();
};
bool operator>(Transformer a, Transformer b)
{
    return a.getPower() > b.getPower();
};
bool operator>=(Transformer a, Transformer b)
{
    return (a==b)||(a>b);
};

bool operator!=(Transformer a, Transformer b)
{
    return !(a==b);
};
bool operator<(Transformer a, Transformer b)
{
    return (!(a==b) || !(a>b));
};
*/


int main(){
	Transformer a;
	Transformer b;
	a = Transformer(10, 10);
	b = Transformer(10, 10);
	if (a == b){
		std::cout<<"true";
	}else{
		std::cout<<"false"<<a->getPower()<< " " << b->getPower()<<std::endl;
	}
	delete a, b;
	return 0;

}