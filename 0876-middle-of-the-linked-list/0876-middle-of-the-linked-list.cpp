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
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;

        // Count the total number of nodes
        while(temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        temp = head;
        int evencnt = 0, oddcnt = 0;
        int i = 0, j = 0;

        if(cnt % 2 == 0) {
            // For even count, the middle is at (cnt / 2) + 1
            evencnt = (cnt / 2) + 1;
            while(temp != nullptr) {
                i++;
                if(i == evencnt) {
                    return temp; // Return the node itself, not the value
                }
                temp = temp->next;
            }
        } else {
            // For odd count, the middle is at (cnt + 1) / 2
            oddcnt = (cnt + 1) / 2;
            while(temp != nullptr) {
                j++;
                if(j == oddcnt) {
                    return temp; // Return the node itself, not the value
                }
                temp = temp->next;
            }
        }

        return nullptr; // In case something goes wrong
    }
};
