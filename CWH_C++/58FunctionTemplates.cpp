#include <iostream>
using namespace std;

// float funcAVG(int a, int b){
//     float avg = float(a+b)/2;
//     return avg;}

// float funcAVG2(int a, float b){
//     float avg = float(a+b)/2;
//     return avg;
// }

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<class T1, class T2>
float funcAVG(T1 a, T2 b){
    float avg = float(a+b)/2;

    return avg;}


int main(){
    float a;
    // a = funcAVG(5,2);
    // a = funcAVG2(5,2.5);

    // a = funcAVG<int, int>(5,2.5);
    a = funcAVG(5,2.5); // will work without mentioning

    printf("The average of these numbers is %.2f\n", a);

    int x = 5, y = 7;
    swapp (x,y);
    cout<<x<<endl<<y;

return 0;
}