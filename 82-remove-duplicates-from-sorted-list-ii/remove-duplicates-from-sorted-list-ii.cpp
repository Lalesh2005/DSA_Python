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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        ListNode* headA=dummy;
        unordered_map<int,int>q;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            q[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(q[temp->val]==1)
            {
                dummy->next=temp;
                temp=temp->next;
                dummy=dummy->next;
                dummy->next=NULL;
            }
            else
            {
                temp=temp->next;
            }

        }
        return headA->next;
    }
};