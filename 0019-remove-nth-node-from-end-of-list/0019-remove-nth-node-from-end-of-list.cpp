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
        int cnt = 0;
        ListNode* temp = head;

        // First pass to count the number of nodes
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }

        // If n is larger than the number of nodes, return head as there's nothing to remove
        if(n > cnt){
            return head;
        }

        // Use a dummy node to handle edge cases, such as removing the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        temp = dummy;

        // Find the (cnt - n)th node from the beginning (1-based index)
        int target = cnt - n;
        for(int i = 0; i < target; i++){
            temp = temp->next;
        }

        // Remove the nth node from the end
        ListNode* nodeToRemove = temp->next;
        temp->next = temp->next->next;
        delete nodeToRemove;

        // Get the new head of the list
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
