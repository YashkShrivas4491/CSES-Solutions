#include <bits/stdc++.h>
using namespace std;
std::vector<std::string> getAllPermutations(std::string& str) {
    std::vector<std::string> permutations;
    std::sort(str.begin(), str.end());

    do {
        permutations.push_back(str);
    } while (std::next_permutation(str.begin(), str.end()));

    return permutations;
}


int main()
{
 string s;
 cin >> s;


  std::vector<std::string> permutations = getAllPermutations(s);
 
    std::cout << permutations.size() << "\n";
    for (const std::string& permutation : permutations) {
        std::cout << permutation << "\n";
    }
        return 0;
}