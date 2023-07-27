#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y); //here Y hasn't been declared yet
                           // thus we have to give a forward declaration
                           // to define Y
};

class Y
{
    int num;

public:
    void setData(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "summing datas of X and Y objects gives me " << o1.data + o2.num;
}

int main()
{
    X a;
    Y b;
    a.setValue(3);
    b.setData(5);

    add(a, b);

    return 0;
}