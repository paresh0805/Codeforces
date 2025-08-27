#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a > b) {
            cout << "First\n";   // Anna has more exclusive buttons
        } else if (a < b) {
            cout << "Second\n";  // Katie has more exclusive buttons
        } else {
            // If exclusive counts are equal, common buttons decide
            if (c % 2 == 1)
                cout << "First\n";  // Odd common → Anna wins
            else
                cout << "Second\n"; // Even common → Katie wins
        }
    }
    return 0;
}
