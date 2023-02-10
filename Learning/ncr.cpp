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
ll ncr( ll n, ll r){
   ll p = 1, k = 1;

   if (n - r < r)
   {
      r = n - r;
   }
   if (r != 0)
   {
      while (r)
      {
         p *= n;
         k *= r;
         ll g = gcd(p,k);
         p /= g;
         k /= g;
         n--;
         r--;
      }
   }
   else
   {
      p = 1;
   }
 return p;
}
void solve()
{
    
}
int main()
{
   init();
   solve();
}