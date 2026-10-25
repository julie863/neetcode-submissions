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
    ListNode* reverseList(ListNode* head) {
    ListNode *forige = nullptr;
    ListNode *aktuel = head;

    while (aktuel != nullptr)
    {
        ListNode *next = aktuel->next;
        
        aktuel->next = forige;

        forige = aktuel;
        aktuel = next;
    }

    return forige;

    }
};
