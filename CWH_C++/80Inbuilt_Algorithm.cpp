#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int n; cin>>n;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}

auto min = min_element(v.begin(), v.end());
cout<<*min<<endl;

auto max = max_element(v.begin(), v.end());
cout<<*max<<endl;

int sum = accumulate(v.begin(), v.end(), 0);
cout<<sum<<endl;

int ct = count(v.begin(), v.end(), 3); //returns number of element
cout<<ct<<endl;

auto element = find(v.begin(), v.end(), 3); // gives iterator
cout<<*element<<endl;

reverse(v.begin(), v.end());
 
//************************LAMDA FUNCTION************************
cout<<[](int x){return x+2;}(2)<<endl; //will return 4
cout<<[](int x,int y){return x+y;}(2,6)<<endl; //will return 8

auto summation = [](int x,int y){return x+y;};
cout<<summation(2,6)<<endl;

//***********************FUNCTION RETURNING TRUE/FALSE*****************88

cout<<all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //will return true if all elements are x < 0
cout<<any_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //will return true if any one elements is x < 0
cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //will return true if none one the elements is x < 0

return 0;
}