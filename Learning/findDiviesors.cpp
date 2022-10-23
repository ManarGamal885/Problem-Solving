#include <bits/stdc++.h>
using namespace std;
/*void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}*/

//O(sqrt(n))
set<int> findDivisors (int n)
{
    set<int>res;
    for(int i=1; i <= n/i; i++)
    {
        if(n%i ==0)
        {
            res.insert(i);
            res.insert(n/i);
        }

    }
     return res;
}
int main ()
{
    int n;
    cin>>n;
    set<int>v;
    v=findDivisors(n);
    for (auto it = v.begin(); it !=
                          v.end(); ++it)
        cout << ' ' << *it;
}
