// ==========================================================
// 83. Remove Duplicates from Sorted List
// Difficulty : Easy
// Language   : C
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.7 MB (Beats 47%)
// Link       : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode *pptr = head;
    struct ListNode *ptr = pptr->next;
    while(pptr != NULL && ptr != NULL){
        if(ptr->val != pptr->val){
            pptr = ptr;
            ptr = pptr->next;
        }else{
            ptr = ptr->next;
            pptr->next = ptr;
        }
    }

    return head;
}