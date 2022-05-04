#include <iostream>
using namespace std;

int main(){
  // Basic Example
  int a= 4;
  int* ptr = &a;
  cout<<"the address of a is "<<&a<<endl;
  cout<<"the value of a is "<<*(ptr)<<endl;

  //New Keyword
  int *p = new int(40);
  cout<<"The address p is "<<p<<endl;
  cout<<"The value at address p is "<<*(p)<<endl;
  delete(p);

  int *arr = new int[4];
  arr[0] = 10;
  *(arr+1) = 100;
  arr[2] = 1000;
  arr[3] = 10000;
  delete[] arr; // delete operator
  cout<<"The value of arr[0] is "<<arr[0]<<endl;
  cout<<"The value of arr[1] is "<<arr[1]<<endl;
  cout<<"The value of arr[2] is "<<arr[2]<<endl;
  cout<<"The value of arr[3] is "<<arr[3]<<endl;

return 0;
}