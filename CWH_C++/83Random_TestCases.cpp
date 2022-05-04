#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <cmath>
#include <ctime>
#define loop(i,s,e) for(int i = s; s<e ? i < e : i >= e; s<e ? i++ : i--)
#define forrr(i,s,e) for(int i = s; i >= e; i--)
#define forr(i,s,e) for(int i = s; i < e; i++)
#define vi vector<int>
#define pii pair<int, int>
#define ss second
#define ff first
#define pb push_back
#define pf push_front
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define arrSize(arr) sizeof(arr)/sizeof(arr[0])
#define ll long long
using namespace std;

int Q(){
    return (10 + rand() % (20-10+1));
}

int main(){
fastio();
srand(time(NULL)); 
int n; cin>>n;
vi v(n);
generate_n(v.begin(), n, Q);
for(auto  i : v)
    cout<<i<<" ";
return 0;
}