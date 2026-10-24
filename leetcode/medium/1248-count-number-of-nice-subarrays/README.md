# Count Number of Nice Subarrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`. A continuous subarray is called  **nice**  if there are `k` odd numbers on it.

Return  *the number of  **nice**  sub-arrays*.

 

 **Example 1:** 

```
Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].

```

 **Example 2:** 

```
Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There are no odd numbers in the array.

```

 **Example 3:** 

```
Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16

```

 

 **Constraints:** 

- 1 <= nums.length <= 50000
- 1 <= nums[i] <= 10^5
- 1 <= k <= nums.length

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 75.52%)  
**Memory:** 71.3 MB (beats 99.21%)  
**Submitted:** 2026-10-24T14:03:03.456Z  

```cpp
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0;
        int high=0;
        int count=0;
        int odd=0;
        int ans =0;
        for(int high=0;high<n;high++){
                if(nums[high]%2!=0){
                    odd++;
                }
                while(odd>k){
                    if(nums[low]%2!=0){
                        odd--;
                    }
                    low++;
                    count=0;
                }
                if(odd==k){
                    while(nums[low]%2==0){
                        count++;
                        low++;
                    }
                    ans +=count+1;
                }
        }
        return ans;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-number-of-nice-subarrays/)