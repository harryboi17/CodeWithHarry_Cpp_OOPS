#include <iostream>
using namespace std;

class A{
    int a;
    public:
        // A & SetData(int a)
        void SetData(int a){
           this->a = a; //using This Pointer
                        // this is a keyword which points to the object which invokes the member function
                        //Used to return something, return object
            // return *this;
        }

        void GetData(){
            cout<<"the value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    // a.SetData(3).GetData();
    a.SetData(3);
    a.GetData();

return 0;
}