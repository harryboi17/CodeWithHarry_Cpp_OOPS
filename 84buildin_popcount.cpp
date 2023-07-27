#include <bits/stdc++.h>
#define ll long long
#define loop(i,s,e) for(ll i = s; s<e ? i < e : i >= e; s<e ? i++ : i--)
#define forrr(i,s,e) for(ll i = s; i >= e; i--)
#define forr(i,s,e) for(ll i = s; i < e; i++)
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define ss second
#define ff first
#define pb push_back
#define pf push_front
#define Rand(arr, n) generate_n(arr.begin(), n, random)
#define Print(arr) for(auto i : arr) cout<<i<<' '; cout<<endl
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define arrSize(arr) sizeof(arr)/sizeof(arr[0])
using namespace std;

//int random(){return 10 + rand() % (100 - 10 + 1);}

ll power(ll x, ll y){ 
   ll res = 1;      
   while (y > 0){ 
       if (y & 1) 
           res = (long long)(res*x); 
       y = y>>1; 
       x = (long long)(x*x);
       //cout<<x<<'\n'; 
   } 
   return res; 
} 

int main(){
fastio(); srand(time(NULL));

ll x; cin>>x;
int a = __builtin_popcountll(x); // lets say x = 100, then this will return number of 1's in binary number of 100 -- 1100100
cout<<a<<endl;

const ll max_num = 1e6;
bitset<20> b;
cout<<b.count()<<endl;
cout<<b<<endl;
return 0;
}