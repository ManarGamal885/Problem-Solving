#include <bits/stdc++.h>
using namespace std;
/*void init ()
{
    cin.tie (0);
    cin.sync_with_stdio (0);
}*/

//O(sqrt(n))
vector< pair<int,int> > findPrimeFactors (int n){
    vector< pair<int,int> >res;
    for(int i=2; i<=n/i; i++){

        if(n%i ==0){
          res.push_back( {i,0} );
          while(n%i==0){
            res.back().second++;
            n /= i;
          }
        }
    }
    if(n>1){
        res.push_back({n,1});
    }
    return res;
}
//O(n)
vector< pair<int,int> > findPrimeFactors1 (int n){
    vector< pair<int,int> >res;
    for(int i=2; i<=n; i++){

        if(n%i ==0){
          res.push_back( {i,0} );
          while(n%i==0){
            res.back().second++;
            n /= i;
          }
        }
    }
    return res;
}
int main ()
{
    int n;
    cin>>n;
    vector< pair<int,int> >v;
    v=findPrimeFactors(n);
    for(auto x: v){
        cout<<x.first <<" "<<x.second<<endl;
    }
}
