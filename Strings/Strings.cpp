//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <bits/stdc++.h>
using namespace std;
void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}
void solve()
{
    string s,t;
    cin>>s>>t;
    string con= s+t;
    char temp=s[0];
    s[0]=t[0];
    t[0]=temp;
    cout<<s<<" "<<t;
}


int main ()
{
    init();
    solve();

}
