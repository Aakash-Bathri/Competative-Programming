#include <iostream>
#include <cmath>
using namespace std;

string canAliceWin(int a, int b) {
    int distance = abs(a - b);
    // Alice wins if the distance is odd
    return (distance % 2 == 1) ? "NO" : "YES";
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b; // Number of lilypads, Alice's position, Bob's position
        cout << canAliceWin(a, b) << endl;
    }
    return 0;
}
