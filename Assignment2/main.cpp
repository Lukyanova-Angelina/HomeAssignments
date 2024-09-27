#include <iostream>
#include <string>
#include "head.h"
int main()
{
	std::string str;
	std::string *mass;
	std::getline(std::cin, str);
	mass = new std::string[100];
	int temprorary = 0;
	int fp = 0;
	int sp = 0;
	std::string oper;
	for (size_t i = 0; i < str.length(); i++) 
    {
        if (str[i] == ' ')
        {
        	if (sp == 0)
        	{
        		sp = i;
        		oper = str.substr(0, i);
        	}
        	else
        	{
        		fp = sp;
        		sp = i;
        		oper = str.substr(fp + 1, sp - fp);
        	}
        	std::cout << oper <<std::endl;
        	if(operand(oper))
        	{
        		std::cout << "qeeeeee" << std::endl;
        	}
        }

    }
    std::cout << str.substr(sp + 1, str.size() - sp) << std::endl;
	return 0;
}