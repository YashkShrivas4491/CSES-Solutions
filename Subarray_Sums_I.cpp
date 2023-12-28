#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long long n,k;
    cin >> n>>k;
    long long nums[n];
    for(int i = 0; i < n; i++){

        cin >> nums[i];
    }
      long long sum=0, count=0, i;
        unordered_map<long long, long long>s;
        
        for(i=0; i<n; i++){
            sum += nums[i];
            if(sum==k)
            count++;
            
            if(s.find(sum-k)!=s.end())
                count+=s[sum-k]; 
                s[sum]++;
        } 
  cout << (count) << endl;
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