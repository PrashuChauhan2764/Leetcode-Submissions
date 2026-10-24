// ==========================================================
// 203. Remove Linked List Elements
// Difficulty : Easy
// Language   : C
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 13 MB (Beats 97%)
// Link       : https://leetcode.com/problems/remove-linked-list-elements/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *ptr = NULL;
    if(head == NULL) return head;
    while(head != NULL && head->val == val){
        head = head->next;
    }
    ptr = head;
    while(ptr != NULL && ptr->next != NULL){
        if(ptr->next->val== val){
            ptr->next = ptr->next->next;
        }else{
            ptr = ptr->next;
        }
    }
    return head;
    
}