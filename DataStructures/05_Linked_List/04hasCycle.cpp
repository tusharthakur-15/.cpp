/*
bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            isCycle = true;
            break;
        }
    }

    if(!isCycle) return NULL;

    return the start node of the cycle

    slow = head;
    ListNode* prev = NULL;

    while(slow != fast) {
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    prev->next = NULL; // TO REMOVE THE CYCLE
    return slow;


}
*/