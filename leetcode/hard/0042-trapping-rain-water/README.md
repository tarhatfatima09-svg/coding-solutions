# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

 

 **Example 1:** 

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

```

 **Example 2:** 

```
Input: height = [4,2,0,3,2,5]
Output: 9

```

 

 **Constraints:** 

- n == height.length
- 1 <= n <= 2 * 104
- 0 <= height[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 25.9 MB (beats 93.67%)  
**Submitted:** 2026-10-19T13:54:25.974Z  

```cpp
class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;

        int leftMax=0;
        int rightMax=0;
        int waterMax=0;

        while(left < right){
            if(height[left]<=height[right]){
                leftMax=max(leftMax,height[left]);
                waterMax +=leftMax-height[left];
                left++;
            }else{
                rightMax=max(rightMax,height[right]);
                waterMax +=rightMax-height[right];
                right--;
            }

        }
        return  waterMax;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)