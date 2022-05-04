#include <iostream>
using namespace std;

int main(){
//example of array
    int mathmarks[4];
    mathmarks[0] = 56;
    mathmarks[1] = 768;
    mathmarks[2] = 867;
    mathmarks[3] = 5667;
    cout<<"these were math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<endl;

//short method
    int marks[4] = {12, 34, 65 ,78}; 
    cout<<"these are marks"<<endl; 
    marks[2] = 89; //changing the value
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;

//modifying the array with the help of for loop
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"the value of marks is "<<marks[i]<<endl;
    }
    cout<<endl;

//challenge: do this using while or do while loops 

//using pointers
int* p = marks;
cout<<"the value of *p is "<<*p<<endl;
cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
cout<<endl;

cout<<*(p++)<<endl;
cout<<*++p<<endl;
return 0;
}