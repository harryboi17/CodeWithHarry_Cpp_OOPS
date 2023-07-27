#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Rand_Max is atleast 32767

int main(){

// to set random number upper limit U and lower limit L
// change rand()  to L + (rand()%(U-L+1)) 

srand((unsigned) time(0)); //without this the function will produce same random number every time
                           //the function is called.
for (int i = 0; i < 5; i++)
{
    cout<< 30 + (rand()%(50 - 30+1))<<" ";
}

return 0;
}