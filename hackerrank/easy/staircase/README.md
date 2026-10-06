# Plus Minus

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Staircase detail

This is a staircase of size $n = 4$:

	   #
	  ##
	 ###
	####

Its base and height are both equal to $n$.  It is drawn using `#` symbols and spaces. **The last line is not preceded by any spaces.** 

Write a program that prints a staircase of size $n$.  

**Function Description**

Complete the $staircase$ function with the following parameter(s):  

- $int\ n$: an integer  

**Print**  

Print a staircase as described above. No value should be returned.  
**Note**: The last line is not preceded by spaces. All lines are right-aligned.

**Input Format**

A single integer, $n$, denoting the size of the staircase.

**Constraints**

$0 \lt n \le 100$ .  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:02:55.646Z  

```cpp
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/staircase/problem)