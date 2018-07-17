#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include <string>
#include <iostream>
using namespace std;

extern int outputFile_vector(string filename, int up_down);
extern int runExe(string exe);
extern int outputFile_getline(string filename, string out_filename);
extern int outputWords_vector(string filename);
extern int outputWords_vector(string filename, string word);
extern int outputLine(string filename);
extern int float_square_vector(int num);

void dostuff(Shape& s);
int main()
{
    cout << "Hello world!" << endl;
#if 0  //myClass test
    Shape sh;
    sh.do_draw();
    sh.do_erase();

    Circle circle0;
    Line line0;
    dostuff(circle0);
    dostuff(line0);

    cout << "circle0.do_sum = " << circle0.do_sum(1, 2, 4)<<endl;
    Shape* sh1 = &circle0;
    cout << "circle0.do_sum (a+b)= " << sh1->do_sum(1,3)<<endl;
    cout << "circle0.do_sum (a*2)= " << sh1->do_sum(3)<<endl;
    cout << hex << 15 << endl;
#endif
    //runExe("msvctest");
    outputFile_vector("extern_function.cpp", 1);
    //outputFile_vector("extern_function.cpp", 0);
    outputFile_getline("main.cpp", "ofstream_out.cpp");
    /*
    cout << "the number of words in "<<"wxtren_dunvtion.cpp is : "
         << outputWords_vector("extern_function.cpp") << endl;
    cout << "the number of words(cout) in "<<"main.cpp is : "
         << outputWords_vector("main.cpp", "cout") << endl;
    */
    //outputLine("main.cpp");
    float_square_vector(5);

    return 0;
}

void dostuff(Shape& s)
{
    s.do_draw();
    s.do_draw();
}
