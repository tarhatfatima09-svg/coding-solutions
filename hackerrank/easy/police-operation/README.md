# Time Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Roy is helping the police department of his city in crime fighting. Today, they informed him about a new planned operation.

Think of the city as a $2D$ plane. The road along the $X$-axis is very crime prone, because $n$ criminals live there. No two criminals live at the same position.

To catch these criminals, the police department has to recruit some police officers and give each of them USD $h$ as wages. A police officer can start his operation from any point $a$, drive his car to point $b$ in a straight line, and catch all the criminals who live on this way. The cost of fuel used by the officer's car is equal to the square of the euclidean distance between points $a$ and $b$ (Euclidean distance between points $(x_1,y_1)$ and $(x_2,y_2)$ equals to $\sqrt{ (x_1-x_2)^2 + (y_1-y_2)^2 }$ ).

The police department asks Roy to plan this operation. So Roy has to tell them the number of officers to recruit and the routes these officers should take in order to catch all the criminals. Roy has to provide this information while minimizing the total expenses of this operation.

Find out the minimum amount of money required to complete the operation.


**Input Format**

The first line contains two integers $n$ $(0 \le n \le 2 \times 10^{6})$, number of criminals, and $h$ $( 0 \le h \le 10^{9} )$, the cost of recruiting a police officer. The next line contains $n$ space separated integers. The $i^{th}$ integer indicates the position of the $i^{th}$ criminal on $X$-axis (in other words, if the $i^{th}$ integer is $x$, then location of the $i^{th}$ criminal is $(x,0)$). The value of the positions are between $1$ and $10^9$ and are given in increasing order in the input.


**Constraints**




**Output Format**

Print the minimum amount of money required to complete the operation.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:06:35.836Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));

    if (s.substr(8, 2) == "AM") {
        if (hour == 12)
            hour = 0;
    } else {
        if (hour != 12)
            hour += 12;
    }

    string result = to_string(hour);

    if (hour < 10)
        result = "0" + result;

    result += s.substr(2, 6);

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << timeConversion(s) << endl;

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/police-operation/problem)