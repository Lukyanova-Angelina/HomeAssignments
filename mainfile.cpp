/* Lukyanova Angelina st128743@student.spbu.ru
first test project */
#include <iostream> 
#include <string>
#include "headler.hpp"

using namespace std;

int main(){
        string nameee;
        greeting();
        cin>>nameee;
	while (nameee != "End!"){
		greeting(nameee);
		cin>>nameee;
	}
}
