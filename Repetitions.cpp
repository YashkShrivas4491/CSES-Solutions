#include <bits/stdc++.h>
using namespace std;
int solve()
{
    string s;
    cin >> s;

    int c = 0;
    int mx = 0;

    for(int i = 0; i < s.size(); i++){
    if(s[i] == s[i+1]){
        c++;
        mx = max(mx, c);
    }else{
        c = 0;
    }
    }

    cout << mx + 1<< endl;

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