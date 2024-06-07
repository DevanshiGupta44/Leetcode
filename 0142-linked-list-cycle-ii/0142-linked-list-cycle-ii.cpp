/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Detect if there is a cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            // Cycle detected
            if (slow == fast) {
                ListNode* temp = head;
                while (temp != slow) {
                    temp = temp->next;
                    slow = slow->next;
                }
                return temp; // or return slow
            }
        }

        // No cycle detected
        return nullptr;
    }
};