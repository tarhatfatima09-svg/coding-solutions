# Time Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a time in [$12$-hour AM/PM format](https://en.wikipedia.org/wiki/12-hour_clock), convert it to military (24-hour) time.  

Note: 
- 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.  
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.  

**Example**  

- $\text{s = '12:01:00PM'}$   

  Return '12:01:00'.

- $\text{s = '12:01:00AM'}$   

  Return '00:01:00'.

**Function Description**  

Complete the $timeConversion$ function with the following parameter(s):

- $string\ s$: a time in $12$ hour format  

**Returns**

- $string$: the time in $24$ hour format

**Input Format**

A single string $s$ that represents a time in $12$-hour clock format (i.e.: $\text{hh:mm:ssAM}$ or $\text{hh:mm:ssPM}$).

**Constraints**

- All input times are valid

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:06:24.504Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/time-conversion/problem)