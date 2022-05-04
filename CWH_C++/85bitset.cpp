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
const ll MAX_W = 1e6;

/*
this is code to check if the given number can be achived by the having sum of subsets of given array
*/
int main(){
fastio(); srand(time(NULL));

bitset<100> can;
ll n, W;
cin>>n>>W;
can[0] = true; // 0 can always be achieved

forr(i,0,n){
    ll x; cin>>x;
    can = can | (can << x);
    /*
    this is basically saying that for ex x = 3, than bit at 0 will be true and bit at 3 will be true
    now for next number for ex x = 2 then, bit at 2 will be true and bit at 5 will also be true because of prev 3
    so if we observe, on adding 2 in eq, we just left shifted it by 2 places
      00100101
 +  00100101
    on talking bit wise or we will get a bit string with all places being true or false depending if it is possible 
    to create the sum with given numbers. Here for 2 and 3 our string is 0010110
    */
}

cout<<(can[W] ? "YES" : "NO")<<endl; 
return 0;
}