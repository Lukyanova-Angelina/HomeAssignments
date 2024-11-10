#include "head.h"

void func(float *a, float *b, int *index_mass, std::string *z) // returns calculated value depended on operation
{
	if (*z == "+") // if +
	{
		*b = (*b) + (*a);
	}else if (*z == "-") // if -
	{
		*b = (*b) - (*a);
	}else if (*z == "*") // if *
	{
		*b = (*b) * (*a);
	}else if (*z == "/") // if /
	{
		*b = (*b) / (*a);
	}
    *a = 0;
    (*index_mass)--;
}
