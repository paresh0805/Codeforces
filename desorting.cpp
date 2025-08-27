#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool alreadyNotSorted = false;
        for (int i = 0; i < n-1; i++) {
            if (a[i] > a[i+1]) {
                cout << 0 << "\n";
                alreadyNotSorted = true;
                break;
            }
        }
        if (alreadyNotSorted) continue;

        long long mini = LLONG_MAX;
        for (int i = 0; i < n-1; i++) {
            long long ops = (a[i+1] - a[i]) / 2 + 1;
            mini = min(mini, ops);
        }
        cout << mini << "\n";
    }
    return 0;
}
