#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T1>
void Harry<T1>::display()
{
    cout << data<<endl;
}

void func(int a){
    cout<<"I am the first function "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"This is templatised function "<<a<<endl;
}

int main()
{
    Harry<float> h(5.7);
    // cout<<h.data;
    h.display();

    func(4); //Exact match takes the highest priority, NON templatised.
    func(5.6);
    return 0;
}