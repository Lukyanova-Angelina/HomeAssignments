#include <iostream> 
#include <string>
class Transformer
{
	std::string name;
	int size, age;
	bool is_alive;
public:
	Transformer(std::string t_name, int t_size, int t_age, bool t_is_alive) : name(t_name), size(t_size), age(t_age), is_alive(t_is_alive) 
	{}
};
