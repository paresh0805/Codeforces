#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int c = (b - (a % b)) % b;  // direct formula
        cout << c << endl;
    }
    return 0;
}
