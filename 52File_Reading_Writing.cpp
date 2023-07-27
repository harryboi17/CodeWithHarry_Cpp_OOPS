#include <iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1. fstreambase 
2. ifstream --> dervied from fstreambase
3. ofstream --> dervied from fstreambase
*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open
a file:
1. using the constructor
2. using the member function open() of the class
using namespace std;
*/

int main(){
    string st = "Harshit: How you doin'?";
    string st2;

    //********Opening files using constructor and writing it******

    ofstream out("52sample.txt"); // write operation
    out<<st<<endl;
    out<<st<<endl;
    out<<st<<endl;

    //********Opening files using constructor and reading it******

    ifstream in("52sampleb.txt"); // reading operation
    // in>>st2; // if we only used this then we will only get the first word of the line, not the entire sentence
    getline(in, st2); // this allows you to get whole line, but only first line, not the line next to it
    getline(in, st2); // but if we run this function again we will get product of next line, and so on
    cout<<st2<<endl;

return 0;
}