/* Lukyanova Angelina st128743@student.spbu.ru
first test project */
#include <iostream> 
#include <string>
#include "headler.hpp"

using namespace std;

int main(){
        string nameee; // variable to recieve string
        greeting(); // func from hello.cpp
        cin>>nameee;
	while (nameee != "End!"){ // loop to print "Hello, {nameee}!"
		greeting(nameee);
		cin>>nameee;
	}
}
