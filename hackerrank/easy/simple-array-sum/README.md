# Simple Array Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers, find the sum of its elements.

For example, if the array $ar = [1,2,3]$, $1 + 2 + 3 = 6$, so return $6$.  

**Function Description**

Complete the $simpleArraySum$ function with the following parameter(s):  

- $ar[n]$: an array of integers  

**Returns**

- $int$: the sum of the array elements

**Input Format**

The first line contains an integer, $n$, denoting the size of the array. 	
The second line contains $n$ space-separated integers representing the array's elements.  

**Constraints**

 $0 \lt n, ar[i] \le 1000$    

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:01:15.665Z  

```cpp
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/simple-array-sum/problem)