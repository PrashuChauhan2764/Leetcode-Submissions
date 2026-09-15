// ==========================================================
// 24. Swap Nodes in Pairs
// Difficulty : Medium
// Language   : C
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 9.6 MB (Beats 8%)
// Link       : https://leetcode.com/problems/swap-nodes-in-pairs/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *first = head;
    struct ListNode *third = NULL;

    if(head == NULL || head->next == NULL) return head;
    else{
    struct ListNode *second = head->next;
        while(first != NULL && second != NULL){
            third = second->next;
            second->next = first;
            first->next = third;
            if(prev != NULL) prev->next = second;
            else head = second;

            //updation part
            prev = first;
            first = third;
            if(third != NULL) second = third->next;
            else second = NULL;
        }
    }
    return head;
    
}