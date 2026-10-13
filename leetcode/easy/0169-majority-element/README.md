# Majority Element

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums` of size `n`, return  *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: 3

```

 **Example 2:** 

```
Input: nums = [2,2,1,1,1,2,2]
Output: 2

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 5 * 104
- -109 <= nums[i] <= 109
- The input is generated such that a majority element will exist in the array.

 

 **Follow-up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 22.20%)  
**Memory:** 42.4 MB (beats 8.01%)  
**Submitted:** 2026-10-13T13:12:43.048Z  

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;

        for (int num : nums) {
            counts[num]++;

            if (counts[num] > nums.size() / 2) {
                return num;
            }
        }

        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element/)