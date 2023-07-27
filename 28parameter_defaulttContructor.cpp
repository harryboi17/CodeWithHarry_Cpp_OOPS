#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printdata()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{ // this is a parametrized constructor as it takes two parameters
    a = x;
    b = y;
}

int main()
{
    //implicit call
    Complex a(4,6);
    a.printdata();

    //explicit call
    Complex b = Complex(5,7);
    b.printdata();

    return 0;
}