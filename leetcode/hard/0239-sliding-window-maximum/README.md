# Sliding Window Maximum

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

You are given an array of integers `nums`, there is a sliding window of size `k` which is moving from the very left of the array to the very right. You can only see the `k` numbers in the window. Each time the sliding window moves right by one position.

Return  *the max sliding window*.

 

 **Example 1:** 

```
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7

```

 **Example 2:** 

```
Input: nums = [1], k = 1
Output: [1]

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -104 <= nums[i] <= 104
- 1 <= k <= nums.length

## Solution

**Language:** C++  
**Runtime:** 448 ms (beats 5.01%)  
**Memory:** 216.2 MB (beats 5.04%)  
**Submitted:** 2026-10-24T13:54:36.863Z  

```cpp
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         int n = nums.size();
        int low = 0;
        vector<int> ans;
        multiset<int> window;

        for (int high = 0; high < n; high++) {
            window.insert(nums[high]);

            if (high - low + 1 > k) {
                window.erase(window.find(nums[low]));
                low++;
            }

            if (high - low + 1 == k) {
                ans.push_back(*window.rbegin());
            }
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sliding-window-maximum/)