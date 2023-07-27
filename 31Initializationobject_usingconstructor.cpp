#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float intrestRate;
    float returnValue;

public:
    BankDeposit(){}; // this default constructor is necessary as function will not run without it
                     // cause even if we dont have given the values of p y r, the constructor will start working
                     // and will let compiler read further code and later except values of p,y,r
    BankDeposit(int p, int y, float r); //r can be a value like 0.04
    BankDeposit(int p, int y, int r);   //r can be a value like 14 percent
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r) / 100;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankDeposit::show()
{
    cout << endl
         << "Priciple amount was " << principal << endl
         << "the return value after " << years
         << " years is " << endl
         << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}