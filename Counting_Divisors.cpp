#include <bits/stdc++.h>
using namespace std;
int solve()
{
long long int n;
cin>>n;

long long int c = 0;

for (int i = 1; i <= n; i++)
{
   if(n % i == 0){
       c++;
   }
  }

  cout << c << endl;

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