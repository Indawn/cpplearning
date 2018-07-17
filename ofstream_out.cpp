#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void dostuff(Shape& s);
extern int outputFile_vector(string filename);
extern int runExe(string exe);
extern int outputFile_getline(string filename, string out_filename);
extern int outputWords_vector(string filename);
int main()
{
    cout << "Hello world!" << endl;

    Shape sh;
    sh.do_draw();
    sh.do_erase();

    Circle circle0;
    Line line0;
    dostuff(circle0);
    dostuff(line0);
#if 0
    cout << "circle0.do_sum = " << circle0.do_sum(1, 2, 4)<<endl;
    Shape* sh1 = &circle0;
    cout << "circle0.do_sum (a+b)= " << sh1->do_sum(1,3)<<endl;
    cout << "circle0.do_sum (a*2)= " << sh1->do_sum(3)<<endl;
    cout << hex << 15 << endl;
#endif
    //runExe("msvctest");
    outputFile_vector("extern_function.cpp");
    outputFile_getline("main.cpp", "ofstream_out.cpp");
    outputWords_vector("extern_function.cpp");
    return 0;
}

void dostuff(Shape& s)
{
    s.do_draw();
    s.do_draw();
}
