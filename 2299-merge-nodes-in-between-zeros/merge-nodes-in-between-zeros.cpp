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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = new ListNode();
        ListNode* current = temp;
        int sum = 0;
         head = head->next;
        while (head) {
            if (head->val == 0) {
                current->next = new ListNode(sum);
                current = current->next;
                sum = 0;
            } else {
                sum += head->val;
            }
            head = head->next;
        }
                return temp->next;
    }
};
