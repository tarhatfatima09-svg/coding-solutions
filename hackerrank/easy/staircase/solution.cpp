#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int x : arr) {
        if (x > 0)
            positive++;
        else if (x < 0)
            negative++;
        else
            zero++;
    }

    int n = arr.size();

    cout << fixed << setprecision(6);

    cout << (double)positive / n << endl;
    cout << (double)negative / n << endl;
    cout << (double)zero / n << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr);

    return 0;
}
