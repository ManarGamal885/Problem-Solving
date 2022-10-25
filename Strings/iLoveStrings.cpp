//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}*/
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int minLength =min(s1.length(), s2.length());
    string s;
    for(int i=0; i<minLength; i++)
    {
        s+=s1[i];
        s+=s2[i];
    }
    if(s1.length()>s2.length())
    {
        cout<<s+s1.substr(minLength,s1.length())<<endl;
    }
    else
    {
        cout<<s+s2.substr(minLength,s2.length())<<endl;
    }
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
