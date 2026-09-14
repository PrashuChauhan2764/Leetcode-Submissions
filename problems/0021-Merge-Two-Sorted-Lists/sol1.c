// ==========================================================
// 21. Merge Two Sorted Lists
// Difficulty : Easy
// Language   : C
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.5 MB (Beats 9%)
// Link       : https://leetcode.com/problems/merge-two-sorted-lists/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    struct ListNode *head = NULL;
    
    if(list1 == NULL && list2 == NULL) return NULL;
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;

    if(list1->val <= list2->val){
        head = list1;
        list1 = list1->next;
    }else{
        head = list2;
        list2 = list2->next;
    }
    struct ListNode *ptr3 = head;
    struct ListNode *tail = head;
    while(list1 != NULL && list2 != NULL){
        if(list1->val <= list2->val){
        head = list1;
        list1 = list1->next;
        }else{
        head = list2;
        list2 = list2->next;
        }
        tail->next = head;
        tail = head;
        
    }
    if(list1 != NULL) head->next = list1;
    else head->next = list2;


    return ptr3;
}