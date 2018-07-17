#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()
{
    //ctor
}

Line::~Line()
{
    //dtor
}

int Line::do_draw()
{
    cout<<"Line do_draw"<<endl;
    return 0;
}

int Line::do_erase()
{
    cout<<"Line do_erase"<<endl;
    return 0;
}
