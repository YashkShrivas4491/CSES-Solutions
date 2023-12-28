#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
int solve()
{
    long long n;
    cin>>n;

    long long ans = 1;

    for(int i=0; i<n; i++){

        ans *= 2;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}


int main()
{
int t=1;
while(t--)
{
solve();
}
return 0;
}