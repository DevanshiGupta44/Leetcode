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
    ListNode* FindNewTail(ListNode* temp, int n) {
        int i = 1;
        while(temp != NULL) {
            if(i == n) {
                return temp;
            }
            i++;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        // Your code here
        if(head == NULL || k == 0) {
            return head;
        }

        // Step 1: Count the number of nodes in the list
        ListNode* temp = head;
        int cnt = 1;  // start from 1 since we're already at the head node
        while(temp->next != NULL) {
            cnt++;
            temp = temp->next;
        }

        // Step 2: If k is greater than the length of the list, adjust k
        k = k % cnt;

        // If k is 0 after the modulus operation, no rotation is needed
        if(k == 0) {
            return head;
        }

        // Step 3: Make the list circular
        temp->next = head;

        // Step 4: Find the new tail, which is (cnt - k) nodes from the start
        ListNode* newtail = FindNewTail(head, cnt - k);

        // Step 5: The new head is the node after newtail
        ListNode* newhead = newtail->next;
        
        // Step 6: Break the circular list
        newtail->next = NULL;

        return newhead;
    }
};
