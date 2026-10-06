# Mini-Max Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.  

**Example**   
$arr = [1, 3, 5, 7, 9]$

The minimum sum is $1 + 3 + 5 + 7 = 16$ and the maximum sum is $3 + 5 + 7 + 9 = 24$.  The function prints

    16 24
    
**Function Description**  

Complete the $miniMaxSum$ function with the following parameter(s):

- $arr[5]$: an array of $5$ integers  

**Print**   
  
Print two space-separated integers on one line: the minimum sum and the maximum sum of $4$ of $5$ elements.No value should be returned. 

**Note** For some languages, like C, C++, and Java, the sums may require that you use a long integer due to their size.

**Input Format**

A single line of five space-separated integers.

**Constraints**

$1 \le arr[i] \le 10^9$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:04:54.054Z  

```cpp
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/mini-max-sum/problem)