#include <bits/stdc++.h>
using namespace std;
/*
NOTE : array should be sorted
Lower Bound:
It returns the address of first occurence of the element if found otherwise
returns the address of greater element of the element.

Ex: 1 3 5 5 7
lower_bound(start, end, element);
lower_bound(ar, ar+n, 5); returns address of index 3
lower_bound(ar, ar+n, 6); returns address of index 5 i.e. number 7
lower_bound(ar, ar+n, 8); returns address of end

Upper Bound:
It returns the adddress of the greater element of the element.

Ex: 1 3 5 5 7 
upper_bound(start, end , 5) returns 7
upper_bound(start, end , 6) returns 7
upper_bound(start, end , 7) returns address of end
*/
int main(){
    int ar[6] = {1,4,3,9,7,11}; /*note since we made array in not accending order thus, if we try to get 
                                  number 2, the function will return 4 not 3 cause 4 is written first.
                                  similarly if we want to get 6, the funct will return 9
                                  and if we try to get "7" which is available in the func, it will still
                                  return 9 as func will read 9 before 7.
                                */

    // auto it = lower_bound(ar, ar+6, 7); //returns address of 7
    // cout<<*it<<endl;                    // if we use *it in cout, then it will give the value of it
                                        
    auto it = lower_bound(ar, ar+5, 10) - ar; // subtracting base address ar to get index of num
    cout<<it<<endl;                           // note: ar represents 1st and ar+5 represents 6th
                                              // note: when you use auto datatype, you have to initialize the variable there 
                                              //       itself, else it will throw an error.

    auto ptr = upper_bound(ar, ar+5, 4);
    cout<<*ptr<<endl;

   //****************************USING IN MAPS AND SETS*****************************8
   /*
   use S.lowerbound or M.lowerbound. cause using it in orignal way will make the time complexity O(n) 
   instead of O(log(n)).
   in case of maps, function written the lower bound upper bound of key of map only
   */

return 0;
}