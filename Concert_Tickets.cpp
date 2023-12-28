#include <bits/stdc++.h>
using namespace std;
int solve()
{
 int n;
 cin >> n;

 int m;
 cin>>m;

 vector<int> p(n), t(m);
 for(int i = 0; i < n; i++){

     cin >> p[i];
 }

 for(int i = 0; i < m; i++){

     cin >> t[i];
 }

 sort(p.begin(), p.end());
 sort(t.begin(), t.end());

while(m--)
{
     for (int i = 0; i<n; i++)
     if(p[i] == t[i])
         cout << p[i] << endl;
         else
         cout << -1 << endl;
     return 0;
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