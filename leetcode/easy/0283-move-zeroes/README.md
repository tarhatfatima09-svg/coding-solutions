# Move Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

 **Note**  that you must do this in-place without making a copy of the array.

 

 **Example 1:** 

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [0]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -231 <= nums[i] <= 231 - 1

 

 **Follow up:**  Could you minimize the total number of operations done?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 23.9 MB (beats 18.94%)  
**Submitted:** 2026-09-28T04:40:39.388Z  

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int position = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[position] = nums[i];
                position++;
            }
        }

        while (position < nums.size()) {
            nums[position] = 0;
            position++;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)