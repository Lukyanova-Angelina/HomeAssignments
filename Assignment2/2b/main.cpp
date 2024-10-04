#include <iostream>
#include <string>
#include "head.h"

int main()
{
	std::string str;
	int *mass;
	mass = new int[100]; // add mass
	std::getline(std::cin, str); // read line
	int fp = 0; // first " "
	int sp = 0; // second " "
	int index_mass = 0; // index of last element of mass
	std::string oper; // part of the line
	for (size_t i = 0; i < str.length(); i++) // loop to split lines
    {
        if (str[i] == ' ') // split with " "
        {
        	if (sp == 0) // if first " "
        	{
        		sp = i;
        		oper = str.substr(0, i);
        	}
        	else 
        	{
        		fp = sp;
        		sp = i; 
        		oper = str.substr(fp + 1, sp - fp - 1); // cut line
        	}
        	if(operand(oper)) // if number
        	{
        		mass[index_mass] = std::stoi(oper); // string -> int
        		index_mass++;
        	}
        	else // if operation
        	{
        		func(&mass[index_mass - 1], &mass[index_mass - 2], &index_mass, &oper); // change mass
        	}
        }
    }
    oper = str.substr(sp + 1, str.size() - sp);
    if(operand(oper)) // если число
    {
        mass[index_mass] = std::stoi(oper); // string -> int
        index_mass++;
    }else
    {
        func(&mass[index_mass - 1], &mass[index_mass - 2], &index_mass, &oper); // change mass
    }
    std::cout << mass[0] << std::endl;  
	return 0;
}