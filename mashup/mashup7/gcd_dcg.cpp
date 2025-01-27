#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        if (r >= l + 1) {
            if (l % 2 == 0) {
                // If l is even
                cout << l << " " << l << endl;
            } else {
                // If l is odd
                cout << l << " " << l + 1 << endl;
            }
        } else {
            // If l == r
            cout << -1 << endl;
        }
    }

    return 0;
}
