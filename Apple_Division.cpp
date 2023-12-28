#include <bits/stdc++.h>
using namespace std;
long long solve(long long idx , long long s1 , long long s2 , vector<long long>&arr)
{
 if(idx == arr.size()){

     return abs(s1 - s2);
 }

  long long dif1 = solve(idx+1, s1 + arr[idx], s2, arr);

  long long dif2 = solve(idx+1, s1 ,arr[idx]+ s2, arr);
   

   return min(dif1,dif2);
}
int main()
{
int t=1;
while(t--)
{
     long long n;
     cin >> n;
     vector<long long> arr(n);
     for(int i = 0; i < n; i++){
         cin >> arr[i];
     }

     long long ans = solve(0,0,0,arr);
     cout << ans << endl;
}
return 0;
}