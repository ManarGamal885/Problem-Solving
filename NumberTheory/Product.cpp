//https://vjudge.net/problem/CodeForces-1294C
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> findPrimeFactors(int n)
{
    vector<int> res;
    for (int i = 2; i <= n / i; i++)
    {
        while (n % i == 0)
        {
            res.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        res.push_back(n);
    }
    return res;
}
void solve()
{
    ll n;
    cin >> n;
    vector<int> v = findPrimeFactors(n);
    if (v.size() < 3)
    {
        cout << "NO" << endl;
    }
    else
    {
        int s1 = v[0];
        int s2 = 1;
        int s3 = 1;
        if (v[0] == v[1])
        {
            s2 = v[1] * v[2];
            for (int i = 3; i < v.size(); i++)
            {
                s3 *= v[i];
            }
            if (s1 == s3 || s2 == s3 || s3 == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout<<s1<<" "<<s2<<" "<<s3<<endl;
            }
        }
        else
        {
            s2 = v[1];
            for (int i = 2; i < v.size(); i++)
            {
                s3 *= v[i];
            }
            if (s1 == s3 || s2 == s3 || s3 == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout<<s1<<" "<<s2<<" "<<s3<<endl;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
   
}