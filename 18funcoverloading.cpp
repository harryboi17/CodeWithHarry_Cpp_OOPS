#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using function with 2 arguments "<<endl;
return a+b;
}

int sum(int a, int b, int c){
    cout<<"using function with 3 arguments "<<endl;
return a+b+c;
}

float volume(double r, int h){
    return(3.14 * r* r* h);
}

int volume(int a){
    return( a*a*a );
}

int main(){
    cout<<"the sum of 3 and 7 is "<<sum(3, 7)<<endl;
    cout<<"the sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    cout<<"the voulume of cylindre is "<<volume(5,7)<<endl;
    cout<<"the voulume of cube is "<<volume(4)<<endl;
return 0;
}