#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "entre the Id of employee"<<endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "the id of this employee is " << id << endl;
    }
};

int main()
{
    // employee harshit,vanshika,anisha;
    // harshit.setId();
    // harshit.getId();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}