#include <bits/stdc++.h>
using namespace std;
const long long mxN = 2e5+5;
 long long dp[mxN];
int solve()
{
   long long n; cin>>n;
     long long a[n+1] = {0};
    for (int i = 1; i <= n; i++) 
        cin>>a[i];
    sort(a, a+n+1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (dp[i-1] < a[i]) return cout<<dp[i-1], 0;
        dp[i] = dp[i-1] + a[i];
    }
    cout<<dp[n];
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