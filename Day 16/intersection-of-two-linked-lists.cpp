// link: https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        while(temp!=NULL){
            ListNode* temp1=headB;
            while(temp1!=NULL){
                if(temp==temp1){
                    return temp;
                }
                temp1=temp1->next;
            }
            temp=temp->next;
        }
        return 0;
    }
};