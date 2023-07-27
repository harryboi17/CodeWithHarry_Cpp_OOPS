#include <iostream>
using namespace std;

/*
Synatx for Initialization list in constructors:
constructor(argument- list) : initilization section{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j){constructor-body}
};
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(j+a)
    // Test(int i, int j) : b(j), a(i+b)   // this will not run and will givbe garbage value of a
                                        // as a is declared before b in the class thus a will initialize first
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "constructor is executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}