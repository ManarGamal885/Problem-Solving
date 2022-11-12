//https://codeforces.com/contest/1076/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll findPrimeFactor(ll n)
{
    for (ll i = 2; i <= n / i; i++)
    {
        while (n % i == 0)
        {
            return i;
        }
    }
    if (n > 1)
    {
        return n;
    }
}
void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        n = n-findPrimeFactor(n);
        cout<<n/2 +1<<endl;
    }
}
int main()
{
    solve();
}