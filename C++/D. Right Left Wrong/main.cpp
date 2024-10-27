#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        int score = 0;
        int i = 0;
        while (i < n) {
            while (i < n && s[i] != 'L') {
                ++i;
            }
            if (i >= n) break;

            int j = i + 1;
            while (j < n && s[j] != 'R') {
                ++j;
            }
            if (j >= n) break;

            for (int k = i; k <= j; ++k) {
                score += a[k];
            }

            i = j + 1;
        }

        cout << score << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
