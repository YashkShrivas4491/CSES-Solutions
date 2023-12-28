#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++) {
        cin >> movies[i].first >> movies[i].second;
    }

    sort(movies.begin(), movies.end(), [](const pair<int, int>& m1, const pair<int, int>& m2) {
        return m1.second < m2.second;
    });

    int maxMovies = 0;
    int endTime = 0;

    for (int i = 0; i < n; i++) {
        if (movies[i].first >= endTime) {
            maxMovies++;
            endTime = movies[i].second;
        }
    }

    cout << maxMovies << endl;

    return 0;
}
