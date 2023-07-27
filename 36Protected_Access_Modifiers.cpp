#include <iostream>
using namespace std;

class Base
{
protected: // it is also private but can be inheritate
    int a;

private:
    int b;
};

class Derived : public Base
{

};

/*                      Public Derivation  Private Derivation  Protected Derivation
1. Private Members        Not Inherited         Not Inherited       Not Inherited
2. Protected Members      Protected             Private             Protected
3. Public Members         Public                Private             Protected
*/

int main()
{
    Base b;
    Derived d;
    // cout<<d.a // will not run cause a is protected even in dervied class
    

    return 0;
}