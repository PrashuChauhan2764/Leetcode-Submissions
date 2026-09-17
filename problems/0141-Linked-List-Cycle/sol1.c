// ==========================================================
// 141. Linked List Cycle
// Difficulty : Easy
// Language   : C
// Solution   : #1
// Runtime    : 14 ms (Beats 29%)
// Memory     : 11.9 MB (Beats 48%)
// Link       : https://leetcode.com/problems/linked-list-cycle/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL) return false;
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;

    }
    return false;
}
    