# Simple Array Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In this challenge, you need to calculate and print the sum of elements in an array, considering that some integers may be very large.

**Function Description**

Complete the $aVeryBigSum$ function with the following parameter(s):

- $int\ ar[n]$: an array of integers  

**Return**

- $long$: the sum of the array elements

**Input Format** 

The first line of the input consists of an integer $n$.  
The next line contains $n$ space-separated integers contained in the array. 

**Output Format**

Return the integer sum of the elements in the array.

**Constraints**  
$1 \le n \le 10$  
$0 \le ar[i] \le 10^{10}$  

**Sample Input**  

    STDIN                                                   Function
    -----                                                   --------
    5                                                       arr[] size n = 5
    1000000001 1000000002 1000000003 1000000004 1000000005  arr[...]  
    

**Output**   
	
    5000000015

**Note:** 

The range of the 32-bit integer is $(-2^{31}) ~to~  (2^{31} -1)~ or~ [-2147483648,2147483647]$.   

When we add several integer values, the resulting sum might exceed the above range. You might need to use long int C/C++/Java to store such sums.  

**Input Format**




**Constraints**

 

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:01:19.376Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/a-very-big-sum/problem)