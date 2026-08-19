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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        if(k == 0)
            return head;
        int count=0;
        ListNode* temp =head;
        ListNode* prev=NULL;
        while(temp!=NULL)
        {
            count++;
            prev=temp;
            temp=temp->next;
        }
        k=k%count;
        int step = count-k-1;
        prev->next=head;
        temp=head;
        int i=0;
        while(i<step)
        {
            temp=temp->next;
            i++;
        }
        head=temp->next;
        temp->next=NULL;
        return head;

    }
};