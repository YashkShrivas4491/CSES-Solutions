#include <bits/stdc++.h>
using namespace std;
int solve()
{
 int n;
 cin >> n;

 multiset<int> S;
 multiset<int>::iterator it;

 for(int i = 0; i < n; i++){
     int a;
     cin >> a;

     S.insert(a);

     it = S.lower_bound(a);
     it++;

     if(it != S.end()){
         S.erase(it);
     }
 }

 cout << (int)S.size() << endl;

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