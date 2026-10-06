# Staircase

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
**Submitted:** 2026-10-06T16:04:07.678Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {
    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print #
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    staircase(n);

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/staircase/problem)