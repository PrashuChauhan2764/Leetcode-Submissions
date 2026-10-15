// ==========================================================
// 61. Rotate List
// Difficulty : Medium
// Language   : C
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.4 MB (Beats 75%)
// Link       : https://leetcode.com/problems/rotate-list/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode *ptr = head;
    struct ListNode *pptr = head;
    int n=0,idx=0;
    if(head == NULL || head->next == NULL) return head;
    n=1;
    while(ptr->next != NULL){
        n++;
        ptr = ptr->next;
    }
    if(k < n){
        idx = n-k;
    }else{
        k = k % n;
        idx = n - k;
    }

    if(idx == 0) return head;
    if(idx == 1){
        ptr->next = head;
        head = pptr->next;
        pptr->next = NULL;
        return head;
    }
    int i=1;
    while(i != idx){
        pptr = pptr->next;
        i++;
    }
    ptr->next = head;
    head = pptr->next;
    pptr->next = NULL;
    return head;
    
}