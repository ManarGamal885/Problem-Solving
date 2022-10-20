#include <bits/stdc++.h>
using namespace std;
/*void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}*/

//check if rime in sqrt(n)
bitset<500001> Primes;
bool checkPrime(int n)
{
    if(n<2)
    {
        return false;
    }
    else if(n%2==0)
    {
        return false;
    }
    else
    {
        for(int i=3; i<=n/i; i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}


//finding the primes in O(n*log(log(n)))
vector<int> findAllPrimes(int n)
{
    vector<int>v;
    bool primes[n+1];
    memset(primes, true, n+1);
//instade of making i*i <=n we make i <= n/2
//Q: why i<=n/2
   // primes[0]=primes[1]=false;
    for(int i=2; i <=n/2; i++ )
    {
        if(primes[i/2])
        {
            for(int j = i*i; j<=n; j+=i)
            {
                primes[j]=false;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(primes[i])
        {
            v.push_back(i);
        }
    }
    return v;
}


//finding the primes in O(n*log(log(n)))
vector<int> findAllPrimes2(int n)
{
    vector<int>v;
    bool primes[n+1];
    memset(primes, true, n+1);
//instade of making i*i <=n we make i <= n/2
    primes[0]=primes[1]=false;
    for(int i=2; i <=n/2; i++ )
    {
        if(primes[i])
        {
            for(int j = i*i; j<=n; j+=i)
            {
                primes[j]=false;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(primes[i])
        {
            v.push_back(i);
        }
    }
    return v;
}


int main ()
{
    int n;
    cin>>n;
    vector<int> v;
    v = findAllPrimes(n);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
