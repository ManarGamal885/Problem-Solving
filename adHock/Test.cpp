//http://www.spoj.com/problems/TEST/
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
    int number;
    while(true)
{
	cin >> number;
	if(number == 42)
		break;
	cout << number;
}

}


int main ()
{
    init();
    solve();
}
