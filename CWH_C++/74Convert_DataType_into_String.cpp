#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template<typename T>  
string itos(T i){
    stringstream s;
    s << i;
    return s.str();
}

int main(){
float i  =144.45;
string ss  = itos(i);
cout<<ss<<endl;
cout<<ss[1]<<endl;

return 0;
}