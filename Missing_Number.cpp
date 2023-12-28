#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long n;
    cin>>n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long res = (n * (n + 1)) / 2;
    long long ans = 0;

    for(int i = 0; i < n-1; i++){

        ans += v[i];
    }

    long long ans1 = 0;
    ans1 = res - ans;

    cout << ans1 << endl;
    
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