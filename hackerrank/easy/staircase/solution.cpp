#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {
    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print #
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    staircase(n);

    return 0;
}
