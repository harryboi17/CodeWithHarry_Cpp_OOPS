//cppreference.com
#include<iostream>
// press control and click on iostream to open header file
using namespace std;
// there are 2 type of header files 
// system header file: comes with compiler
// user header file: written by programmer


   int main()
{
   //arithmatic operators
   int a=4, b=6;
   cout<<"using arithmatic operators: "<<endl;
   cout<<"the value of a+b: "<<a+b<<endl;    
   cout<<"the value of a-b: "<<a-b<<endl;    
   cout<<"the value of a*b: "<<a*b<<endl;    
   cout<<"the value of a/b: "<<a/b<<endl;  // only give int value  
   cout<<"the value of a % b: "<<a % b<<endl;    
   cout<<"the value of a++: "<<a++<<endl;    // prints value of a and then inc its value by 1
   cout<<"the value of a--: "<<a--<<endl;    // prints value of a and then dec its value by 1
   cout<<"the value of ++a: "<<++a<<endl;    // inc its value by 1 and then print the inc value
   cout<<"the value of --a: "<<--a<<endl;    // dec its value by 1 and then print its dec value
   cout<<endl;
   //alt+shift+ mouse drag and press end key to add same word to every line of code
   // press alt + ctrl and movement key to have multiple cursors   

   //    comparison operator
   cout<<"the value of a == b is "<<(a==b)<<endl;
   cout<<"the value of a != b is "<<(a!=b)<<endl;
   cout<<"the value of a >= b is "<<(a>=b)<<endl;
   cout<<"the value of a <= b is "<<(a<=b)<<endl; 
   cout<<"the value of a > b is "<<(a>b)<<endl;
   cout<<"the value of a < b is "<<(a<b)<<endl;
   cout<<endl;
    
   // locial operators
   cout<<"using logical operators"<<endl;
   cout<< "the value of logical and operator ((a==b) and (a<b)) is:"<<((a==b) && (a<b))<<endl;
   cout<< "the value of logical or  operator ((a==b) or (a<b)) is:"<<((a==b) || (a<b))<<endl;
   cout<< "the value of logical  not operator !(a==b) is:"<<!(a==b)<<endl;
    return 0;
}
