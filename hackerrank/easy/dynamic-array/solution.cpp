#include <bits/stdc++.h>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seqList(n);
    vector<int> ans;
    int lastAnswer = 0;

    for (auto q : queries) {
        int type = q[0];
        int x = q[1];
        int y = q[2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[idx].push_back(y);
        }
        else if (type == 2) {
            lastAnswer = seqList[idx][y % seqList[idx].size()];
            ans.push_back(lastAnswer);
        }
    }

    return ans;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> queries(q, vector<int>(3));

    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    vector<int> result = dynamicArray(n, queries);

    for (int x : result) {
        cout << x << endl;
    }

    return 0;
}
