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
    ListNode* oddEvenList(ListNode* head) {
    
       if (!head || !head->next || !head->next->next) {
        // If the list has 0, 1, or 2 nodes, return the list as it is
        return head;
    }

    ListNode* odd = head; // Points to the head of odd nodes
    ListNode* even = head->next; // Points to the head of even nodes
    ListNode* evenHead = even; // Store the head of the even nodes

    while (even != nullptr && even->next != nullptr) {
        // Reorder the odd nodes
        odd->next = even->next;
        odd = odd->next;

        // Reorder the even nodes
        even->next = odd->next;
        even = even->next;
    }

    // Merge odd nodes and even nodes
    odd->next = evenHead;

    return head;
    }
};