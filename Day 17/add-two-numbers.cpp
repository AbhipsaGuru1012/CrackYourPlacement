// link: https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
        void insertAtTail(ListNode* &head, int val){
        ListNode* n=new ListNode(val);

        if(head==NULL){
            head=n;
            return;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        temp->next=n;

	
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* temp=l1;
       ListNode* temp1=l2;
        int sum=0,carry=0;
        int m=0;
        ListNode* head=NULL;
        while(temp!=NULL || temp1!=NULL){
            if(temp==NULL){
                sum=sum+carry+temp1->val;
                m=(temp1->val+carry)%10;
                carry=(temp1->val+carry)/10;
                temp1=temp1->next;
                
            }else if(temp1==NULL){
                sum=sum+carry+temp->val;
                m=(temp->val+carry)%10;
                carry=(temp->val+carry)/10;
                temp=temp->next;
            }else{
                sum=sum+carry+temp->val+temp1->val;
                m=(temp->val+temp1->val+carry)%10;
                carry=(temp->val+temp1->val+carry)/10;
                
                temp=temp->next;
                temp1=temp1->next;
            }
            insertAtTail(head, m);
        }
        if(carry!=0){
           insertAtTail(head, carry); 
        }
        return head;
    }
};