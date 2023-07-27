#include <iostream>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
/*
this function is use disable the sync between stdio and iostream.
i.e. std input output(printf scanf) and iostream(cout cin).
by doing so when we have two func printf and cout given simuntaneously the printf func will run first and then cout
so when we are not using any printf func we can we use this func to make the code compile faster.

NOTE: C++ is faster than C in execution time but when they both are syncronized, they share same buffer thus inc the execution time
*/

for (int i = 0; i < 3; i++)
{
    cout<<"this is cout"<<"\n";
    printf("this is printf\n");
}
//Here printf will be executed first

cin.tie(NULL);
/*
this allows cin to execute  first even if their is a cout present before the cin
this help in increasing the execution time
*/
int a;
cin>>a;
cout<<a;


return 0;
}