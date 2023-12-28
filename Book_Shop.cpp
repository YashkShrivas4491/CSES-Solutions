#include <iostream>
#include <vector>

using namespace std;

int n, x;
vector<int> price, pages;

int getMaxPages() {
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= x; ++j) {
            if (price[i - 1] <= j) {
                dp[i][j] = max(pages[i - 1] + dp[i - 1][j - price[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][x];
}

int main() {
    cin >> n >> x;
    price.resize(n);
    pages.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> price[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> pages[i];
    }

    int maxPages = getMaxPages();
    cout << maxPages << endl;

    return 0;
}
