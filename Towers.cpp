#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<int> towers;  // Multiset to store the top elements of the towers

    for (int i = 0; i < n; ++i) {
        int cube;
        cin >> cube;

        auto it = towers.upper_bound(cube);  // Find the first tower with a top element greater than the cube

        if (it != towers.end()) {
            towers.erase(it);  // Remove the tower with a top element greater than the cube
        }

        towers.insert(cube);  // Place the cube on a new tower or replace an existing tower with the cube
    }

    cout << towers.size() << endl;

    return 0;
}
