#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long long a, b;
    cin >> a >> b;

    if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    return 0;
}


int main()
{
int t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}
