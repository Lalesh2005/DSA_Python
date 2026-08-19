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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* even =new ListNode(-1);
        ListNode* odd = new ListNode(-1);
        ListNode* Ehead = even;
        ListNode* Ohead = odd;
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL)
        {
            if(count%2==0)
            {
                even->next=temp;
                temp=temp->next;
                even=even->next;
                even->next =NULL;
            }
            else
            {
                odd->next=temp;
                temp=temp->next;
                odd=odd->next;
                odd->next =NULL;
            }
            count++;
        }
        even->next=Ohead->next;
        return Ehead->next;
        
    }
};