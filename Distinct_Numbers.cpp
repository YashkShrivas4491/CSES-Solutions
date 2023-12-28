#include <bits/stdc++.h>
using namespace std;
int solve()
{
 int n;
 cin >> n;

 vector<long long> v(n);
 for(int i = 0; i < n; i++){
     cin >> v[i];
 }


 set<long long> st;
 for(auto it:v){
     st.insert(it);
 }

 cout << st.size();

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