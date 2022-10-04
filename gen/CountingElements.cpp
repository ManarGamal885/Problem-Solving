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
    int n;
    int MAX= 1e3+1;
    cin>>n;
    int arr[n];
    int a[MAX]= {0};
    int count=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        a[arr[i]]++;
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]+1==arr[i+1] )
        {
            count+=a[arr[i]];
        }
    }
    cout<<count<<endl;

}


int main ()
{
    init();
    solve();
}
