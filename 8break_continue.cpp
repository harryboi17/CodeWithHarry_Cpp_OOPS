#include <iostream>
using namespace std;

int main(){
    for  (int i = 0; i < 4; i++)
    {
        /* break and continue*/
        if(i==2){
            continue; /*break will stop the fucntion while continue 
                       will skip the function mentioned in the condition*/
        }
        cout<<i<<endl;
    }
    
return 0;
}