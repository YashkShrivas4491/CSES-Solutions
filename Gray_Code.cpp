#include <iostream>
#include <vector>

std::vector<std::string> grayCode(int n) {
    if (n == 1) {
        return {"0", "1"};
    }

    std::vector<std::string> prevGrayCode = grayCode(n - 1);
    std::vector<std::string> grayCodeSeq;

    for (int i = 0; i < prevGrayCode.size(); i++) {
        grayCodeSeq.push_back("0" + prevGrayCode[i]);
    }

    for (int i = prevGrayCode.size() - 1; i >= 0; i--) {
        grayCodeSeq.push_back("1" + prevGrayCode[i]);
    }

    return grayCodeSeq;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> result = grayCode(n);
    for (const std::string& code : result) {
        std::cout << code << '\n';
    }

    return 0;
}
