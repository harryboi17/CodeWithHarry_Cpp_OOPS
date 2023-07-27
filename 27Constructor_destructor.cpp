#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    //creating a constructor
    // constructor is a special number function with the same name as of class.
    //it is automatically invoked
    // it is used to initialize objects of the class

    Complex(void); //constructor declaration

    void printdata()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{ // this is a default constructor as it takes no parameter
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printdata();

    return 0;
}
//********properties of constructor*********
/*
1. should be decalred in the public section of class
2. they are automatically invoked whenever object is created
3. Do not have return types and cannot return values
4. it can have default arguments
5. we cannot refer to their address
*/