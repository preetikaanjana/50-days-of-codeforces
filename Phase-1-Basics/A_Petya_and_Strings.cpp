#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O optimization for Competitive Programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++) {
        // Convert both characters to lowercase manually using built-in C++ functions
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);

        if (c1 < c2) {
            cout << -1 << "\n";
            return 0; // Instantly kills the program - no infinite loops possible
        }
        if (c1 > c2) {
            cout << 1 << "\n";
            return 0; // Instantly kills the program
        }
    }

    // If we survive the loop, the strings are completely identical
    cout << 0 << "\n";
    return 0;
}