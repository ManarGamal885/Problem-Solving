//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include <bits/stdc++.h>
using namespace std;
void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}
void solve()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]==','){
            s[i]=' ';
        }
        if(isupper(s[i])){
            char temp = tolower(s[i]);
            s[i]= temp;
        }
        else if(islower(s[i])){
            char temp = toupper(s[i]);
            s[i]= temp;
        }
    }
    cout<<s<<endl;
}


int main ()
{
    init();
    solve();
}
