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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int>arr;
        vector<int>t;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
             t.push_back(temp->val);
            temp=temp->next;
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=t[i])
            {
                return false;
            }
        }
        return true;

    }
};