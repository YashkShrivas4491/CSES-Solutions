#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long countSubarraysWithKDistinct(vector<long long>& arr, long long k) {
    long long n = arr.size();
    long long count = 0;
    long long left = 0;
    unordered_map<long long, long long> freq_map;

    for (long long right = 0; right < n; right++) {
        freq_map[arr[right]]++;

        while (freq_map.size() > k) {
            freq_map[arr[left]]--;
            if (freq_map[arr[left]] == 0) {
                freq_map.erase(arr[left]);
            }
            left++;
        }

        count += right - left + 1;
    }

    return count;
}

  int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << countSubarraysWithKDistinct(arr, k) << endl;

    return 0;
}
