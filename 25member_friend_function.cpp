#include <iostream>
using namespace std;

//forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex); //here o1 o2 are not declared yet and will be declared 
                                          //later and thus cant be mentioned right now  
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // individually declaring functions as friends
    // friend int calculator::sumRealComplex(complex o1, complex o2);
    // friend int calculator::sumcompcomplex(complex o1, complex o2);

    //alternate method: declaring the entire calculator as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
};

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
};

int main()
{
    complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
    cout<<"the sum of the complex part of o1 o2 is "<<resc<<endl; 

    return 0;
}