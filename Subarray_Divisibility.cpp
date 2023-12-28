#include <iostream>
#include <vector>
#include <unordered_map>

long long countSubarraysWithSumDivisibleByN(const std::vector<long long>& arr, long long n) {
    long long count = 0;
    std::unordered_map<long long, long long> prefixSumCount;

    long long prefixSum = 0;
    for (long long i = 0; i < arr.size(); i++) {
        prefixSum = (prefixSum + arr[i]) % n;
        if (prefixSum < 0)
            prefixSum += n;

        if (prefixSum == 0)
            count++;

        if (prefixSumCount.find(prefixSum) != prefixSumCount.end())
            count += prefixSumCount[prefixSum];

        prefixSumCount[prefixSum]++;
    }

    return count;
}

    int main() {
    long long n; // Size of the array
    std::cin >> n;

    std::vector<long long> arr(n); // Array elements
    for (long long i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    long long result = countSubarraysWithSumDivisibleByN(arr, n);
    std::cout << result << std::endl;

    return 0;
}
