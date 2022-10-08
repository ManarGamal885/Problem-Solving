//https://www.spoj.com/problems/GNY07A/
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
    int i=1;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        string res;
        cout<<i<<" "<<s.substr(0,n-1)<<s.substr(n,s.size())<<endl;
        i++;
    }

}


int main ()
{
    init();
    solve();
    //cout<<convertFromString("1000");
}
