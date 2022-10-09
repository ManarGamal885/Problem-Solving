//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
#include <bits/stdc++.h>
using namespace std;
void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}
void solve()
{
    int n,odd=0,even=0;
    int op=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

   if(even==odd){
    cout<<0<<endl;
   }
   else if(n%2 !=0){
    cout<<-1<<endl;
   }
   else{
    cout<<abs(even-odd)/2<<endl;
   }
}


int main ()
{
    init();int t;
    cin>>t;
    while(t--){
        solve();
    }

}
