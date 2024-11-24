#include <iostream>

#include "Transformers.h"
#include "Winx.h"

int main(){
	Transformer a(10, 10);
	Transformer b(10, 10);	
	std::cout<<a;
	Winx qw(100, 10, "pink", 10);
	std::cout<<qw;
	return 0;

}