#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
 vector<long long> memo;
long long countWays(long long n) {
   

    if (n == 0)
        return 1;
    
    if (memo[n] != -1)
        return memo[n];
    
    long long ways = 0;
    for (long long i = 1; i <= 6; i++) {
        if (n >= i)
            ways = (ways + countWays(n - i)) % MOD;
    }
    
    return memo[n] = ways;

}

    int main() {
    long long n;
    cin >> n;
     memo.assign(n + 1, -1);
    long long ways = countWays(n);
    cout << ways << endl;
    
    return 0;
}
