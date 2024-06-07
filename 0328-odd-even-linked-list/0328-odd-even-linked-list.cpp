class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even; // Save the head of the even list

        int cnt = 1; // Counter to track the index of nodes

        while (even && even->next) {
            if (cnt % 2 != 0) {
                odd->next = even->next; // Link odd nodes
                odd = odd->next;
            } else {
                even->next = even->next->next; // Link even nodes
                even = even->next;
            }
            cnt++;
        }

        odd->next = evenHead; // Connect the end of odd list with the start of even list

        return head;
    }
};
