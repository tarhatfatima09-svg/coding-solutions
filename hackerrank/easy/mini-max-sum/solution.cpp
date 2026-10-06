#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<long long> arr) {
    long long total = 0;

    for (long long x : arr) {
        total += x;
    }

    long long minSum = total - arr[4];
    long long maxSum = total - arr[0];

    for (int i = 0; i < 5; i++) {
        long long sum = total - arr[i];

        minSum = min(minSum, sum);
        maxSum = max(maxSum, sum);
    }

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}
