//https://www.spoj.com/problems/ADUN/
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
    string s1,s2;
    int carry=0;
    string sumS1S2="";
    cin>>s1>>s2;
    if(s1>s2){
        swap(s1,s2);
    }
    int n1= s1.length(),n2=s2.length();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    for(int i=0; i<n2;i++){
        int sum=((s1[i]-'0')+(s2[i]-'0')+carry);
        sumS1S2.push_back(sum%10+'0');
        carry= sum/10;
    }

    for(int i=n1; i<n2; i++){
        int sum = ((s2[i]-'0')+carry);
        sumS1S2.push_back((sum%10)+'0');
        carry=sum/10;
    }
    if(carry){
        sumS1S2.push_back(carry+'0');
    }
    reverse(sumS1S2.begin(), sumS1S2.end());
    cout<<sumS1S2<<endl;
}


int main ()
{
    init();
    solve();
}
