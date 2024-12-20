/*
Lukyanova Angelina st128743@student.spbu.ru
Problem 6
*/
#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <string>
#include <vector>

template <class T>
class TemplateClass
{
private:
    T object;
    int number;
    std::vector<float> data{};

public:
    TemplateClass(T& p):object(p) {};
    bool foo();
    void setnumber(int n);
    void setdata(std::vector<float> ndata);
};

class Class1
{
public:
    bool bar(int number, std::vector<float>& data);
    int c_1_1();
    float c_1_2();
    void c_1_3();
};
class Class2
{
public:
    bool bar(int number, std::vector<float>& data);
    int c_2_1();
    float c_2_2();
    void c_2_3();
};
class Class3
{
public:
    bool bar(int number, std::vector<float>& data);
    int c_3_1();
    float c_3_2();
    void c_3_3();
};


#endif