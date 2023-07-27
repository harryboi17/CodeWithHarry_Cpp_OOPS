#include <iostream>
using namespace std;

int main(){
    //poitner is data type which holds the address of other data type
    
    // & is |address| of operator
    int a=3;
    int* b= &a;
    cout<<"the address of a: "<<&a<<endl;
    cout<<"the address of a: "<<b<<endl;
    
    // * gives |value| at address of operator(dereference operator)
    cout<<"the value at address b is "<<*b<<endl;

    //pointer to pointer ( pointer which holds the address of other pointer)
    int** c= &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c "<<*c<<endl;  //value at address c hold the address of a
    cout<<"the value at address value_at(value_at(C)) is "<<**c<<endl;

return 0;
}