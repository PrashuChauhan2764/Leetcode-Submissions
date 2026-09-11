// ==========================================================
// 19. Remove Nth Node From End of List
// Difficulty : Medium
// Language   : C
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 10.2 MB (Beats 43%)
// Link       : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* start, int n) {
    struct ListNode *ptr, *pptr = NULL;
    int totalNodes = 0,index = 0;
    if(start != NULL){
        ptr = start;
        totalNodes = 1;
        while(ptr->next != NULL){
            totalNodes++;
            ptr = ptr->next;
        }
        index = (totalNodes - n) + 1;
        if(totalNodes == 1){
            start = NULL;

        }else{

        if(index >= 1 && index <= totalNodes){
            ptr = start;
            pptr = start;

            if(index == 1){
                start = start->next;
            }
            if(index == totalNodes){
                while(ptr->next != NULL){
                    pptr = ptr;
                    ptr = ptr->next;
                }
                ptr = NULL;
                pptr->next = NULL;
            }
        
            if(index > 1 && index < totalNodes){
                for(int i=1; i<=index; i++){
                    if(i == index){
                        pptr->next = ptr->next;
                        ptr = ptr->next;
                    }else{
                        pptr = ptr;
                        ptr = ptr->next;

                    }
                }
            }

        }else{
            printf("\nOut of Bound value!!");
        }
        }
    }else{
        start = NULL;
    }

    return start;
    
}