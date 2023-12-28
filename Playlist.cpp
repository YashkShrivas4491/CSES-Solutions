#include<bits/stdc++.h>
using namespace std;

long long longestUniqueSequence(long long n, const std::vector<long long>& songs) {
    unordered_map<long ,long> songSet;
    long long longestSequence = 0;
    long long left = 0;

    for (long long right = 0; right < n; ++right) {
        
        if (songSet.find(songs[right]) == songSet.end()) {
            songSet[songs[right]];
            longestSequence = std::max(longestSequence, right - left + 1);
        } else {
            
            while (songSet.find(songs[right]) != songSet.end()) {
                songSet.erase(songs[left]);
                ++left;
            }
            songSet[songs[right]];
        }
    }

    return longestSequence;
}

int main() {
    long long n;
    std::cin >> n;

    std::vector<long long> songs(n);
    for (long long i = 0; i < n; ++i) {
        std::cin >> songs[i];
    }

    long long result = longestUniqueSequence(n, songs);
    std::cout << result << std::endl;

    return 0;
}
