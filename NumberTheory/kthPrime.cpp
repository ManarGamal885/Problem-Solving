#include <bits/stdc++.h>
using namespace std;
set<long long> findDivisors (long long n)
{
    set<long long>res;
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
        long long n,k;
        cin>>n>>k;
        set<long long>v;
        v=findDivisors(n);
        if(k>v.size()){
             cout<<-1<<endl;
         }
        else{
             long long x = *std::next(v.begin(), k-1);
             cout<<x<<endl;
        }
       
    
    
}