# The Else if Statement

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number, you have to use if, else if, else conditional statements according to the following:
 **if**  number is greater than 100: Print  **"Big"** (without quotes)
 **else if**  number is smaller than 10: Print  **"Small"** (without quotes)
 **else** : Print  **"Number"** (without quotes) 

 **Note:**  Ensure that the output includes a newline after every print statement.

 **Examples:** 

```
Input: number = 9
Output: Small
Explanation: Here, the else if condition will work as 9 is smaller than 10.
```

```
Input: number = 101
Output: Big
Explanation: 101 is greater than 100, so our if statement works and we print Big.
```

```
Input: number = 30
Output: Number
Explanation: 30 is neither greater than 100, nor smaller than 10, so the else statement works here.
```

**Constraints:
**1 ≤ number ≤ 1000

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T04:39:09.806Z  

```py
class Solution:

    def utility(self, number):
        if number > 100:
            print("Big")
        elif number < 10:
            print("Small")
        else:
            print("Number")
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/the-else-if-statement/1)