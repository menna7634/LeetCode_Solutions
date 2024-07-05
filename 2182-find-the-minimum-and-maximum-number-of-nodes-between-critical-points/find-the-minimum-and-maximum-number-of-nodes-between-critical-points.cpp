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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v;
        ListNode* prev=head;
        ListNode* curr=head->next;
        int i=1;
        while (curr && curr->next) {
            if ((curr->val > prev->val && curr->val > curr->next->val) || 
                (curr->val < prev->val && curr->val < curr->next->val)) {
                v.push_back(i);
            }
            prev=curr;
            curr=curr->next;
            i++;
        }

        if (v.size()<2) {
            return {-1,-1};
        }

        int minDist=INT_MAX;
        for (int i = 1; i < v.size(); ++i) {
            minDist = min(minDist, v[i] - v[i - 1]);
        }

        int maxDist = v.back() - v.front();

        return {minDist, maxDist};
    }
};