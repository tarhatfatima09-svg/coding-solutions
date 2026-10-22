# Permutation in String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two strings `s1` and `s2`, return `true` if `s2` contains a permutation of `s1`, or `false` otherwise.

In other words, return `true` if one of `s1`'s permutations is the substring of `s2`.

 

 **Example 1:** 

```
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

```

 **Example 2:** 

```
Input: s1 = "ab", s2 = "eidboaoo"
Output: false

```

 

 **Constraints:** 

- 1 <= s1.length, s2.length <= 104
- s1 and s2 consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 74.64%)  
**Memory:** 9.9 MB (beats 88.45%)  
**Submitted:** 2026-10-22T16:16:18.615Z  

```cpp
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m){
            return false;
        }
        int low=0;
        int count1[26]={0};
        int count2[26]={0};

        for(int i=0;i<n;i++){
             count1[s1[i] - 'a']++;
}
        for(int high=0;high<m;high++){
             count2[s2[high] - 'a']++;
        
        if(high-low+1>n){
            count2[s2[low] - 'a']--;
            low++;
        }
        if( high - low +1==n){
            if(equal(count1, count1+26, count2)){
            return true;
        }
     }
    }
      return false;  
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutation-in-string/)