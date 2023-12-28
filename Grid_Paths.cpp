#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ok[1001][1001];
ll dp[1001][1001];

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {
			if (s[j] == '.') ok[i][j] = true;
			else ok[i][j] = false;
		}
	}

	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!ok[i][j]) dp[i][j] = 0;
			else {
				if (i > 0) dp[i][j] += dp[i - 1][j];
				if (j > 0) dp[i][j] += dp[i][j - 1];
				dp[i][j] %= 1000000007;
			}
		}
	}

	cout << dp[n - 1][n - 1] << "\n";

	return 0;
}