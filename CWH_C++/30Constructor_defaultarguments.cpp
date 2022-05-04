#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9) //default argument
    {
        data1 = a;
        data2 = b;
    }

    void printData();
};

void Simple::printData()
{
    cout << "the value of the data is " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s2(1,5);
    s2.printData();

    Simple s(1);
    s.printData();

    return 0;
}