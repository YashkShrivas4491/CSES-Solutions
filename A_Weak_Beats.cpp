#include <bits/stdc++.h>
using namespace std;
int solve()
{
  string s;
  cin >> s;

  int n = s.size();

  for(int i = 0; i < n; i += 1){
  
     if(s[i] % 2 != 0 && i % 2 != 0){
        cout<< "No" << "\n";
        return 0;
     }
  
  }
  cout<< "Yes" << "\n";

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