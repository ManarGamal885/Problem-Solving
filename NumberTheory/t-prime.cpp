// https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool checkPrime(ll n)
{
    if(n<2)
    {
        return false;
    }
    else if(n%2==0)
    {
        return false;
    }
    else
    {
        for(int i=3; i<=n/i; i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
bool isInt( long double n){
    return floor(n) == ceil(n); 
}
void solve(){
  ll n;
  cin>>n;
  if(!isInt(sqrt(n))){
    cout<<"NO"<<endl;
  }
  else{
    if(checkPrime(sqrt(n)) || sqrt(n)==2){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
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