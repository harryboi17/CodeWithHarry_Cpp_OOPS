#include <iostream>
#include <sstream>
using namespace std;

int main(){
cout<<"Entre the value of string or integer you want to input: "<<endl;
int input;
string str;
cin>>input>>str;

stringstream ss("abc");
// char A;
// ss>>A;
// cout<<A<<endl;
ss<<input; //putting in value to st stringstream
ss<<',';
ss<<str;

string strin;
ss>>strin; // extracting the value from string stream.

cout<<"The value of string is "<<strin;
cout<<strin.length();

return 0;
}