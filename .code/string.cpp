#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); ++i) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}
bool isPalindrome(string s) {
    // 预处理字符串
    string processed;
    for (char c : s) {
        if (isalnum(c)) {
            processed += tolower(c);
        }
    }
    
    // 检查是否为回文
    int left = 0, right = processed.length() - 1;
    while (left < right) {
        if (processed[left] != processed[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void print(vector<string>& strs) {
    for (auto& str : strs) {
        cout << str << " ";
    }
    cout << endl;
}

int main() {

    // vector<string> test1 = {"flower", "flow", "flight"};
    // cout << "test 1: " << longestCommonPrefix(test1) << endl;

    // vector<string> test2 = {"dog", "racecar", "car"};
    // cout << "test 2: " << longestCommonPrefix(test2) << endl;

    // vector<string> test3 = {"interstellar", "intermediate", "internet"};
    // cout << "test 3: " << longestCommonPrefix(test3) << endl;

    vector<string> test4 = {"flower", "flow", "flight"};
    print(test4);

    sort(test4.begin(), test4.end());
    print(test4);

    return 0;

}
