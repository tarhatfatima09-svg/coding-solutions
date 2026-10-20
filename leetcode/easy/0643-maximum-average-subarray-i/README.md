# Maximum Average Subarray I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a contiguous subarray whose  **length is equal to**  `k` that has the maximum average value and return  *this value*. Any answer with a calculation error less than `10-5` will be accepted.

 

 **Example 1:** 

```
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

```

 **Example 2:** 

```
Input: nums = [5], k = 1
Output: 5.00000

```

 

 **Constraints:** 

- n == nums.length
- 1 <= k <= n <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 47.66%)  
**Memory:** 113.6 MB (beats 98.20%)  
**Submitted:** 2026-10-20T13:45:54.995Z  

```cpp
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int sum=0;
      for(int i=0;i<k;i++){
        sum +=nums[i];
      }  
      int maxSum=sum;
      for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum -=nums[i-k];
            maxSum = max(maxSum, sum);
      }
      return (double)maxSum/k;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-average-subarray-i/)