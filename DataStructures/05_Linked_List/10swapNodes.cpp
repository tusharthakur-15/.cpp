// 24. Swap Nodes in Pairs

/*
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* first = head;
        ListNode* sec = first->next;
        ListNode* prev = NULL;

        while(first != NULL && sec != NULL) {
            ListNode* third = sec->next;
            sec->next = first;
            first->next = third;

            if(prev != NULL) {
                prev->next = sec;
            } else {
                head = sec;
            }

            prev = first;
            first = third;
            if(third != NULL) {
                sec = third->next;
            } else {
                sec = NULL;
            }
        }
        return head;
    }
};
*/