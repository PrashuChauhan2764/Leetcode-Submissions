// ==========================================================
// 142. Linked List Cycle II
// Difficulty : Medium
// Language   : C
// Solution   : #1
// Runtime    : 10 ms (Beats 12%)
// Memory     : 11.1 MB (Beats 35%)
// Link       : https://leetcode.com/problems/linked-list-cycle-ii/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }


    }
    return NULL;
}