// ==========================================================
// 2. Add Two Numbers
// Difficulty : Medium
// Language   : C
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 13.4 MB (Beats 85%)
// Link       : https://leetcode.com/problems/add-two-numbers/
// ==========================================================

        }

    }
    if(carry == 1){
        newnode = (struct ListNode *)malloc(sizeof(struct ListNode));
        resultptr->next = newnode;
        newnode->val = carry;
        resultptr = newnode;
        newnode->next = NULL;

    }
    return head;
}