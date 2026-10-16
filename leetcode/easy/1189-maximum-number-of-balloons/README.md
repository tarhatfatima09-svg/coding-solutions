# Maximum Number of Balloons

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `text`, you want to use the characters of `text` to form as many instances of the word  **"balloon"**  as possible.

You can use each character in `text`  **at most once**. Return the maximum number of instances that can be formed.

 

 **Example 1:** 

```
Input: text = "nlaebolko"
Output: 1

```

 **Example 2:** 

```
Input: text = "loonbalxballpoon"
Output: 2

```

 **Example 3:** 

```
Input: text = "leetcode"
Output: 0

```

 

 **Constraints:** 

- 1 <= text.length <= 104
- text consists of lower case English letters only.

 

 **Note:**  This question is the same as 2287: Rearrange Characters to Make Target String.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 19.42%)  
**Memory:** 9.1 MB (beats 37.50%)  
**Submitted:** 2026-10-16T16:15:41.496Z  

```cpp
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>freq;
        for (char ch : text) {
            freq[ch]++;
        }

        freq['l'] /= 2;
        freq['o'] /= 2;

        return min({freq['b'], freq['a'], freq['l'],
                    freq['o'], freq['n']});
    }
    
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-number-of-balloons/)