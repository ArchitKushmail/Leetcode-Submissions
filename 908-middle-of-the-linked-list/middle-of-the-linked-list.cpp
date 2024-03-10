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
        // Brute - Force TC: O(n)
        
        // int size_of_linkedlist = 0;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     size_of_linkedlist++;
        //     temp = temp->next;
        // }
        // int half_of_size = size_of_linkedlist/2;
        // temp = head;
        // while(half_of_size--){
        //     temp = temp->next;
        // }
        // return temp;
        
        
        // Optimised method Slow and fast pointer TC: O(n/2)
        
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next !=NULL){
            fast = fast ->next->next;
            slow = slow->next;
        }
        return slow;
    }
};