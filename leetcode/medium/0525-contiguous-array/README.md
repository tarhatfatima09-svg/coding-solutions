# Contiguous Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary array `nums`, return  *the maximum length of a contiguous subarray with an equal number of* `0` *and* `1`.

 

 **Example 1:** 

```
Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

```

 **Example 2:** 

```
Input: nums = [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

```

 **Example 3:** 

```
Input: nums = [0,1,1,1,1,1,0,0,0]
Output: 6
Explanation: [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 28 ms (beats 30.43%)  
**Memory:** 88.1 MB (beats 97.58%)  
**Submitted:** 2026-10-26T14:38:26.829Z  

```cpp

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int one = 0;

        unordered_map<int, int> freq;
        int res = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zero++;
            } else {
                one++;
            }

            int diff = zero - one;

            if (diff == 0) {
                res = max(res, i + 1);
            } else if (freq.find(diff) == freq.end()) {
                freq[diff] = i;
            } else {
                int idx = freq[diff];
                int len = i - idx;
                res = max(res, len);
            }
        }

        return res;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/contiguous-array/)