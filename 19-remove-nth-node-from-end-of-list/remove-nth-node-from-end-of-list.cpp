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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     int count=0;
    //     ListNode* temp=NULL;
    //     temp=head;
    //     while(temp!=NULL)
    //     {
    //         count++;
    //         temp=temp->next;
    //     }
    //     if(count==n)
    //     {
    //         head=head->next;
    //         return head;
    //     }
    //     ListNode* curr=NULL;
    //     ListNode* prev=NULL;
    //     curr=head;
    //     for(int i=0;i<(count-n);i++)
    //     {
    //         prev=curr;
    //         curr=curr->next;
    //     }
    //     if(curr->next==NULL)
    //     {
    //         prev->next=NULL;
    //         return head;
    //     }
    //     prev->next=curr->next;
    //     return head;


//_____OPTIMIZED method
    ListNode* dummy = new ListNode(0);
dummy->next = head;

ListNode* slow = dummy;
ListNode* fast = dummy;

for(int i=0;i<=n;i++)
{
    fast = fast->next;
}

while(fast)
{
    slow = slow->next;
    fast = fast->next;
}

slow->next = slow->next->next;

return dummy->next;
        
    }
};