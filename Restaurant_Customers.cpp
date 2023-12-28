#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> customers(n);
    for (int i = 0; i < n; i++) {
        cin >> customers[i].first >> customers[i].second;
    }

    sort(customers.begin(), customers.end());

    int maxCustomers = 0;
    int currentCustomers = 0;

    for (int i = 0; i < n; i++) {
        if (customers[i].first > customers[i - 1].second) {
            currentCustomers = 1;
        } else {
            currentCustomers++;
        }
        maxCustomers = max(maxCustomers, currentCustomers);
    }

    cout << maxCustomers << endl;

    return 0;
}
