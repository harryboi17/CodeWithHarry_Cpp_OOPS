#include <iostream>
#include<vector>
using namespace std;

template<class T>

class Vector{
    public:
    T *arr;
    int size;
        Vector(int m){
            size = m;
            arr = new T[size];
        }

        T dotProduct(Vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
                return d;
            
        }
};

int main(){
    // Vector v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;

    // Vector v2(3);
    // v2.arr[0] = 4;
    // v2.arr[1] = 5;
    // v2.arr[2] = 6;

    // int a =v1.dotProduct(v2);
    // cout<<a<<endl;

    Vector<float> v1(3);
    v1.arr[0] = 1.1;
    v1.arr[1] = 2.2;
    v1.arr[2] = 3.3;

    Vector<float> v2(3);
    v2.arr[0] = 4.4;
    v2.arr[1] = 5.5;
    v2.arr[2] = 6.6;

    float a =v1.dotProduct(v2);
    cout<<a<<endl;

return 0;
}