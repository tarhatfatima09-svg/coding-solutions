# Insert Interval

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an array of non-overlapping intervals `intervals` where `intervals[i] = [starti, endi]` represent the start and the end of the `ith` interval and `intervals` is sorted in ascending order by `starti`. You are also given an interval `newInterval = [start, end]` that represents the start and end of another interval.

Two intervals are considered overlapping if they share  **at least**  one point.

Insert `newInterval` into `intervals` such that `intervals` is still sorted in ascending order by `starti` and `intervals` still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return `intervals` *after the insertion*.

 **Note**  that you don't need to modify `intervals` in-place. You can make a new array and return it.

 

 **Example 1:** 

```
Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]

```

 **Example 2:** 

```
Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].

```

 

 **Constraints:** 

- 0 <= intervals.length <= 104
- intervals[i].length == 2
- 0 <= starti <= endi <= 105
- intervals is sorted by starti in ascending order.
- newInterval.length == 2
- 0 <= start <= end <= 105

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 37.31%)  
**Memory:** 21.5 MB (beats 97.51%)  
**Submitted:** 2026-11-09T13:49:07.598Z  

```cpp

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        vector<vector<int>> res;
        int start = b[0];
        int end = b[1];
        bool inserted = false;
        for(int i = 0; i < a.size(); i++) {
            if(a[i][1] < start) {
                res.push_back(a[i]);
            }
            else if(a[i][0] > end) {
                if(!inserted) {
                    res.push_back({start, end});
                    inserted = true;
                }
                res.push_back(a[i]);
            }
            else {
                start = min(start, a[i][0]);
                end = max(end, a[i][1]);
            }
        }
        if(!inserted) {
            res.push_back({start, end});
        }
        return res;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/insert-interval/)