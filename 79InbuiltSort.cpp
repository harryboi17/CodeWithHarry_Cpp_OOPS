#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
search how to use introsort.
introsort is best sorting algorihm which comprised of quicksort, heap sort and insertion sort
*/

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.first != b.first)
    {
        if(a.first > b.first) return false; // usually we would return true here, when we want to sort in ascending order
                                            // but since we will be using it in sort func, thus we will be doing opp.
        return true;
    }else{
        if(a.second < b.second) return false; //same goes here
        return true;
    }
    
}
int main(){
int n; cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{   
    cin>>a[i];
}
sort(a,a+n, cmp); //compartor function, which return true or false
                  // note : comparator func works opp to what we give input
                  // if you want something to be true then return false and vice versa

return 0;
}