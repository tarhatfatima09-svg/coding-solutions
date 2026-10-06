#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxHeight = *max_element(candles.begin(), candles.end());
    int count = 0;

    for (int height : candles) {
        if (height == maxHeight) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);

    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    int result = birthdayCakeCandles(candles);

    cout << result << endl;

    return 0;
}
