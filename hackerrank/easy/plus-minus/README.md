# A Very Big Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers, calculate the ratios of its elements that are $positive$, $negative$, and $zero$. Print the decimal value of each fraction on a new line with 6 places after the decimal.

**Note:** This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to $10^{-4}$ are acceptable.

**Example**  
$arr = [1,1,0,-1,-1]$  

There are $n=5$ elements: two positive, two negative and one zero.  Their ratios are $\frac{2}{5} = 0.400000$, $\frac{2}{5} = 0.400000$ and $\frac{1}{5} = 0.200000$.  Results are printed as:  

    0.400000
    0.400000
    0.200000
    
**Function Description**

Complete the $plusMinus$ function with the following parameter(s):

- $int\ arr[n]$: an array of integers

**Print**  
	Print the ratios of positive, negative and 	zero values in the array.  Each value should be printed on a separate line with $6$ digits after the decimal.  The function should not return a value.  

**Input Format**

The first line contains an integer, $n$, the size of the array.	 
The second line contains $n$ space-separated integers that describe $arr[n]$.

**Constraints**

$0 \lt n \le 100$  
$-100 \le arr[i] \le 100$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:02:11.900Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

long long aVeryBigSum(vector<long long> ar) {
    long long sum = 0;

    for (long long x : ar) {
        sum += x;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<long long> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    long long result = aVeryBigSum(ar);

    cout << result << endl;

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/plus-minus/problem)