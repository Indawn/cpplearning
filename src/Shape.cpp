#include "Shape.h"
#include <iostream>
using namespace std;
Shape::Shape()
{
    //ctor
}

Shape::~Shape()
{
    //dtor
}

int Shape::do_draw()
{
    cout<<"Shape do_draw"<<endl;
    return 0;
}

int Shape::do_erase()
{
    cout<<"Shape do_draw"<<endl;
    return 0;
}

int Shape::do_sum(int a, int b)
{
    return a + b;
}

int Shape::do_sum(int a)
{
    return a * 2;
}
