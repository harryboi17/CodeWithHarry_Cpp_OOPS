#include <iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void SetData(int a, float b){
            id = a;
            price = b;
        }

        void GetData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;        /*
                                Here we have to make ptrTemp as a new object as in the first for loop
                                ptr was incrementing and when we started to get result in 2nd for loop
                                we already have ptr incremented as thus it will not start from beginning
                                but rather by where it ended, thus we made another object and made it equal to ptr
                                as now we can use it to get data in second for loop from beginning.
                                */
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Entre Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->SetData(p,q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout<<"Item number: "<<j+1<<endl;
        ptrTemp->GetData();
        ptrTemp++;

    }
    
    

return 0;
}