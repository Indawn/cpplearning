#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int outputFile_vector(string filename, int up_down)
{
    vector<string> v;
    ifstream in(filename.c_str());                  //c_str(): string to c-str
    string line;
    while(getline(in, line))
        v.push_back(line);
    for(int i = 0; i < v.size(); i++)
    {
        if(up_down)
            cout << dec << v.size() - i << ": " << v[v.size() - i - 1] << endl;
        else
            cout << dec << i + 1 << ": " << v[i] << endl;   //v[i]: 取vector中的第i行
    }
    return v.size();
}

int outputWords_vector(string filename)
{
    vector<string> v;
    ifstream in(filename.c_str());                  //c_str(): string to c-str
    string word;
    while(in >> word)
        v.push_back(word);
    for(int i = 0; i < v.size(); i++)
        cout << dec << i + 1 << ": " << v[i] << endl;   //v[i]: 取vector中的第i行
    return v.size();
}

int outputWords_vector(string filename, string word)
{
    vector<string> v;
    ifstream in(filename.c_str());                  //c_str(): string to c-str
    string inword;
    while(in >> inword)
    {
        if(inword == word)
            v.push_back(inword);
    }
    for(int i = 0; i < v.size(); i++)
        cout << dec << i + 1 << ": " << v[i] << endl;   //v[i]: 取vector中的第i行
    return v.size();
}

int runExe(string exe)
{
    char yorn = 0;
    while(yorn != 'y' && yorn != 'n')
    {
        cout << "Do you want to run " << exe << "? (y/n)";
        cin >> yorn;
    }
    if(yorn == 'y')
        system(exe.c_str());
    return 1;
}

int outputFile_getline(string filename, string out_filename)
{
    ifstream in(filename.c_str());
    ofstream out(out_filename.c_str());
    string s;//, all_line;
    int lineNum = 1;
    while(getline(in, s))
    {
        cout << lineNum << ": " << s << "\n";
        out << s << "\n";
        lineNum++;
      //  all_line += s + "\n";
    }
    //cout << "the whole file is : \n" << all_line << endl;
    return 1;
}

int outputLine(string filename)
{
    vector<string> v;
    ifstream in(filename.c_str());
    string line;
    while(getline(in, line))
    {
        v.push_back(line);
        if(cin.get() =='\n')
            cout << line;
    }
    return v.size();
}

int float_square_vector(int num)
{
    vector<double> f;
    for(int i = 0; i < num; i++)
    {
        float temp;
        cin >> temp;
        f.push_back(temp);
    }
    for(int i = 0; i < num; i++)
    {
        cout << f[i] << " " ;
        f[i] *= f[i];
    }
    cout << endl;
    for(int i = 0; i < num; i++)
        cout << f[i] << " ";
    return num;
}



