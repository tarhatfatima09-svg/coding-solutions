
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
