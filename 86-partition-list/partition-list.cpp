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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less = new ListNode(-1);
        ListNode* headA= less;
        ListNode* more = new ListNode(-1);
        ListNode* headB= more;
        ListNode* temp = head;
        ListNode* prev =NULL;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                less->next=temp;
                temp=temp->next;
                prev=less;
                less=less->next;
                less->next=NULL;
            }
            else
            {
                more->next=temp;
                temp=temp->next;
                more=more->next;
                more->next=NULL;
            }
        }
        less->next = headB->next;
        return headA->next;
        
    }
};