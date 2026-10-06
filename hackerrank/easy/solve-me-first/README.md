# Solve Me First

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Complete the function $solveMeFirst$ to compute the sum of two integers.

**Example**  
$a = 7$  
$b = 3$  

Return $10$.

**Function Description**  

Complete the $solveMeFirst$ function with the following parameters:  

- $int\ a$: the first value
- $int\ b$: the second value

Returns  
- $int$: the sum of $a$ and $b$


**Input Format**

 

**Constraints**

 $1 \le a, b \le 1000$   

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:00:23.625Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/solve-me-first/problem)