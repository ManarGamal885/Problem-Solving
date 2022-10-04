#include <bits/stdc++.h>
#include <sstream>
#include <cmath>
using namespace std;
void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}
void solve()
{
    long n,k;
    cin>>n>>k;
    long long arr[n];
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i=0; i<k; i++)
    {
        if(arr[i]<0){
            break;
        }
        sum+=arr[i];
    }

        cout<<sum;
}

int main ()
{
    init();
    solve();
}
