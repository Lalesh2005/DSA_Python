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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=l1;
        ListNode* h2=l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        int carry = 0;
        while( h1!=NULL || h2!=NULL || carry>0)
        {
            int sum=0;
            if(h1!=NULL && h2!=NULL)
            {
                sum = h1->val + h2->val + carry;
            }
            else if(h1!=NULL && h2==NULL)
            {
                sum = h1->val + carry;
            }
            else if(h1==NULL && h2!=NULL)
            {
                sum = h2->val + carry;
            }
            else
            {
                sum = carry;
            }
            int num = sum%10;
            carry =sum/10;
            tail->next = new ListNode(num);
            tail = tail->next;
            if(h1!=NULL)
            {
                h1=h1->next;
            }
            if(h2!=NULL)
            {
                h2=h2->next;
            }
        }
        return dummy->next;
        
    }
};