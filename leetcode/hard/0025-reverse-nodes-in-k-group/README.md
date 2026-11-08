# Reverse Nodes in k-Group

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given the `head` of a linked list, reverse the nodes of the list `k` at a time, and return  *the modified list*.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k` then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]

```

 **Example 2:** 

```
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= k <= n <= 5000
- 0 <= Node.val <= 1000

 

 **Follow-up:**  Can you solve the problem in `O(1)` extra memory space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.2 MB (beats 97.71%)  
**Submitted:** 2026-11-08T13:43:13.905Z  

```cpp

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevGroup = NULL;

        while (true) {
            ListNode* kth = temp;
            int count = 0;

            while (kth != NULL && count < k) {
                kth = kth->next;
                count++;
            }

            if (count < k)
                break;

            ListNode* prev = kth;
            ListNode* curr = temp;

            while (curr != kth) {
                ListNode* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }

            if (temp == head)
                head = prev;
            else
                prevGroup->next = prev;

            prevGroup = temp;
            temp = kth;
        }

        return head;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/reverse-nodes-in-k-group/)