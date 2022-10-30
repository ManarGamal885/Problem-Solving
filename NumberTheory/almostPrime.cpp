//https://codeforces.com/problemset/problem/26/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}
int findPrimeFactors (int n){
    int count =0;
    for(int i=2; i<=n/i; i++){

        if(n%i ==0){
          count++;
          while(n%i==0){
            n /= i;
          }
        }
    }
    if(n>1){
        count++;
    }
    return count;
}
void solve(){
    int n;
    cin>>n;
    int almostP=0;
    for (int i=6 ; i<=n; i++){
        if(findPrimeFactors(i)==2){
            almostP++;
        }
    }
    cout<<almostP<<endl;
}
int main ()
{
    solve();
}
