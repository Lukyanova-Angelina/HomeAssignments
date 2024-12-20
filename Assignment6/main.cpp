/*
Lukyanova Angelina st128743@student.spbu.ru
Problem 6
*/
#include "main.h"

template <typename T>
void TemplateClass<T>::setnumber(int n)
{
    number = n;
}

template <typename T>
void TemplateClass<T>::setdata(std::vector<float> ndata)
{
    data = ndata;
}


template <class T>
bool TemplateClass<T>::foo()
{
    return object.bar(number, data);
}

template <>
bool TemplateClass<int>::foo()
{
    return true;
}

template <>
bool TemplateClass<double>::foo()
{
    return false;
}
bool Class1::bar(int number, std::vector<float>& data)
{
    return number >0;
}
int Class1::c_1_1()
{
    return 455;
}
float Class1::c_1_2()
{
    return 4.2;
}
void Class1::c_1_3()
{
    std::cout<<"Hello, World!"<<std::endl;
}
bool Class2::bar(int number, std::vector<float>& data)
{
    return !data.empty();
}
int Class2::c_2_1()
{
    return 36;
}
float Class2::c_2_2()
{
    return 3.1415;
}
void Class2::c_2_3()
{
    std::cout<<"Goodbye, World!"<<std::endl;
}
bool Class3::bar(int number, std::vector<float>& data)
{
    return static_cast<int>(data.size()) * -1 == number;
}
int Class3::c_3_1()
{
    return 1979;
}
float Class3::c_3_2()
{
    return 2.72;
}
void Class3::c_3_3()
{
    std::cout<<"Hello, C++!"<<std::endl;
}