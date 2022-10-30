//https://vjudge.net/problem/CodeForces-1475A/origin
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    bool flag = false;
    cin>>n;
        while(n%2==0){
            n=n/2;
        }
        if(n>=3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
int main ()
{
    int t;
    cin>>t;
    while(t--){
         solve();
    }
}
