#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;
void init()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}
void solve()
{
   string s;
   cin >> s ;
   ll number = 0;
   for (int i = 0; i < s.size(); i++)
   {
      number *= 10;
      number += s[i] - '0';
   }
  cout<<number<<endl;
}
int main()
{
   init();
   solve();
}