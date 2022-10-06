//http://www.spoj.com/problems/ADDREV/
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;
void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}
int convertFromString(string s){
    int num=0;
    for(int i=0; i<s.size(); i++){
        num = 10*num +(s[i]-'0');
    }
    return num;
}
void solve()
{
    string num1,num2;
    cin>>num1>>num2;
    string numR1,numR2;
    for(int i=num1.size()-1; i>=0; i--){
        numR1+=num1.at(i);
    }
    for(int i=num2.size()-1; i>=0; i--){
        numR2+=num2.at(i);
    }
    int sum = convertFromString(numR2)+convertFromString(numR1);
    string s=to_string(sum);
    string res;
    for(int i=s.size()-1; i>=0; i--){
        res+=s.at(i);
    }
    cout<<convertFromString(res)<<endl;
}
int main ()
{
    init();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
