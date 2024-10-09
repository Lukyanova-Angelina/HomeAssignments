#include <iostream>
#include <string>
bool operand(std::string oper) // checks if string is a number or an operation
{	
	bool digit = true;
	for (int i = 0; i < oper.length(); i++) // if el of a line if a number
	{
		if (!isdigit(oper[i]))
		{
			digit = false;
			break;
		}
	}
	return digit;
}
