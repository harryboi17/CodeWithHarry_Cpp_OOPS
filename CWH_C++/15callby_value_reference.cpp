#include <iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}

//this will not swap a and b
void swap(int a, int b){ 
    int temp = a;
    a = b;
    b = temp;
}

// call by reference using pointers
void swappointer(int* x, int* y){ 
    int temp = *x;
    *x = *y;
    *y = temp;
}

//call by reference using C++ reference variable
void swapReferenceVar(int &x, int &y){ 
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    // cout<<"the sum is "<<sum(4,5)<<endl;
    int a=4, b= 6;
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
    // swappointer(&a,&b);//the will swap a and b
    swapReferenceVar(a,b); 
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
    
return 0;
}