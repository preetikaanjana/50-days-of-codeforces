#include <iostream>
#include <string>

using namespace std;

int main() {
    // Standard CP fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string username;
    if (cin >> username) {
        bool seen[26] = {false};
        int distinct_count = 0;

        for (int i = 0; i < username.length(); i++) {
            int index = username[i] - 'a';
            // Only count if it's a valid lowercase letter and we haven't seen it
            if (index >= 0 && index < 26 && !seen[index]) {
                seen[index] = true;
                distinct_count++;
            }
        }

        if (distinct_count % 2 == 0) {
            cout << "CHAT WITH HER!";
        } else {
            cout << "IGNORE HIM!";
        }
        cout << "\n";
    }

    return 0;
}