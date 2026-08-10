// ==========================================================
// 206. Reverse Linked List
// Difficulty : Easy
// Language   : C
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.3 MB (Beats 92%)
// Link       : https://leetcode.com/problems/reverse-linked-list/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = next;