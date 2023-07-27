#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "entre the binary number " << endl;
    cin >> s;
};

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect bianry format" << endl;
            exit(0);
        }
    }
};

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
};

void binary ::display(void)
{
    cout<<"displaying your binary number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl; 
};

int main()
{
    //nestng of member functions
    binary b;
    b.read();
    b.chk_bin(); // note: if any of this fucntion was private
                 // then they cannot be used un main fuuntion, and will only run in class.
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
};