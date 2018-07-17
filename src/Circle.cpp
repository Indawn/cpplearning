#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
{
    //ctor
}

Circle::~Circle()
{
    //dtor
}

int Circle::do_draw()
{
    cout<<"Circle do_draw"<<endl;
    return 0;
}

int Circle::do_erase()
{
    cout<<"Circle do_erase"<<endl;
    return 0;
}

int Circle::do_sum(int a, int b, int c)
{
    return a + b + c;
}
