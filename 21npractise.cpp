#include <iostream>
using namespace std;

class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void getPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "entre Id of your item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "entre the price of your item " << endl;
    cin >> itemPrice[counter];
    counter++; // to get to item number 2 or 3
};

void shop ::displayPrice(void)
{
    initcounter();
    for (int i = 0; i < 4; i++)
    {
        setPrice();
    }
    for (int i = 0; i < counter; i++)
    {
        cout << "the Price of item with Id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop BitCoin;

    BitCoin.displayPrice();

    return 0;
}