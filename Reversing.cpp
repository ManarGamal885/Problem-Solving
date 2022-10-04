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
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            reverse(arr, arr+i);
        }
    }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main ()
{
    init();
    solve();

}
