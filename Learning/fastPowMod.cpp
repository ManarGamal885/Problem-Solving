#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}*/

//O(log(n))
ll fastPowMod(ll x ,ll n, ll mod){
    ll res=1;
    while(n){
        if(n & 1==1){
            res *= x;
            res %=mod;
        }
        x = x*x;
        x %=mod;
        n = n >>1;
    }
    return res;
}
int main ()
{
    cout<<fastPow(3,5,2);
}
