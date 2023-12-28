#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin>>n;

    if(n == 1){
        cout << 1 << endl;
    }

    if( n >= 2 && n <= 3){
        cout << "NO SOLUTION" << endl;
    }
    else {
        vector<int> perm;
        for (int i = 2; i <= n; i += 2) {
            perm.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            perm.push_back(i);
        }

        for (int i = 0; i < n; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }
  

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