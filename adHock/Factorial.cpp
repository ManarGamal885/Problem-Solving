//https://www.spoj.com/problems/FCTRL/
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;
void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}
void solve()
{
   int t;
   cin>>t;
    while(t--){
    int n;
    cin>>n;
    int i=0;
    int ans=1;
    int f=INT_MAX;
    while(f>=1)
    {
        f = floor(n/(ans*=5));
        i+=f;
    }
    cout<<i<<endl;
    }

}


int main ()
{
    init();
    solve();
    //cout<<convertFromString("1000");
}
