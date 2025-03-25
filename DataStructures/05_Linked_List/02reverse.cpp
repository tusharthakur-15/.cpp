#include <iostream>
#include <list>
using namespace std;

/*
int reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NUULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}
*/
int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
}
