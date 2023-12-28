#include <iostream>
#include <string>
#include <unordered_map>

std::string palindromeReorder(const std::string& s) {
    std::unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }

    std::string evenCountChars, oddCountChar;
    for (const auto& entry : charCount) {
        char c = entry.first;
        int count = entry.second;

        if (count % 2 == 0) {
            evenCountChars.append(count / 2, c);
        } else {
            if (!oddCountChar.empty()) {
                return "NO SOLUTION";
            }
            oddCountChar = c;
        }
    }

    std::string palindrome = evenCountChars + oddCountChar + std::string(evenCountChars.rbegin(), evenCountChars.rend());
    return palindrome;
}

int main() {
    std::string inputStr = "AAAACACBA";
    std::string outputStr = palindromeReorder(inputStr);
    std::cout << outputStr << std::endl;

    return 0;
}
