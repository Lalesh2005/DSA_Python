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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return;

        // 1. Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Split and reverse second half
        ListNode* second = slow->next;
        slow->next = NULL;

        ListNode* prev = NULL;

        while(second)
        {
            ListNode* nxt = second->next;
            second->next = prev;
            prev = second;
            second = nxt;
        }

        // prev = head of reversed second half

        // 3. Merge alternately
        ListNode* first = head;
        ListNode* secondHalf = prev;

        while(secondHalf)
        {
            ListNode* n1 = first->next;
            ListNode* n2 = secondHalf->next;

            first->next = secondHalf;
            secondHalf->next = n1;

            first = n1;
            secondHalf = n2;
        }
    }
};