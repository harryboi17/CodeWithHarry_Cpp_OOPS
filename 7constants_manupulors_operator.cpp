#include<iostream>
#include<iomanip> // setw is defined in iomapin
using namespace std;

int main(){
// //constants
// const int a= 4;
// cout<<"the value of a is: "<<a;
// a= 7; // error
// cout<<"the value of a is: "<<a;

//******setw******
// manipulators in C++
// int a=4, b= 34, c= 56;
// cout<<"the value of a without setw is:"<<a<<endl;
// cout<<"the value of b without setw is:"<<b<<endl;
// cout<<"the value of c without setw is:"<<c<<endl;
// cout<<"the value of a with setw is:"<<setw(4)<<a<<endl;
// cout<<"the value of b with setw is:"<<setw(4)<<b<<endl;
// cout<<"the value of c with setw is:"<<setw(4)<<c<<endl;

//********operator precedance*******
int a= 3, b = 4;
int c = a*5+b-45+87; // preference given to multiplication then division addition subtraction
cout<<c;

return 0;
}