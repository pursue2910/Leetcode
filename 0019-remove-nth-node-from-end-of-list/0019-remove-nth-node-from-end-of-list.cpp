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
        int length = 0;
ListNode* temp = head;

// Find length
while (temp != NULL) {
    length++;
    temp = temp->next;
}

// If head needs to be removed
if (length == n) {
    return head->next;
}

// Find node before the one to delete
temp = head;

int stoppos = length - n - 1;

int count = 0;

while (count < stoppos) {
    temp = temp->next;
    count++;
}

// Delete the node
temp->next = temp->next->next;

return head;
        
    }
};