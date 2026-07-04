#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<char> numbers;
    
    // Extract only the digits
    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c);
        }
    }
    
    // Sort digits in non-decreasing order
    sort(numbers.begin(), numbers.end());
    
    // Print the sorted elements with '+' between them
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;
    
    return 0;
}