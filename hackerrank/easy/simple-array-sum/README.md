# Solve Me First

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
**Submitted:** 2026-10-06T16:00:28.530Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = solveMeFirst(a, b);

    cout << result << endl;

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/simple-array-sum/problem)