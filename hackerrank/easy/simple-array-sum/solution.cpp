#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum = 0;

    for (int x : ar) {
        sum += x;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int result = simpleArraySum(ar);

    cout << result << endl;

    return 0;
}
