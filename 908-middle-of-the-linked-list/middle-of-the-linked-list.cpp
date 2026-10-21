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
        ListNode* temp = head;
        if(head == nullptr){
            return head;
        }
        int count = 1;
        while(temp -> next != nullptr){
          
            temp = temp->next;
              count+=1;
        }
        int mid  =(count/2) +1;

        temp = head;
        while(mid>1){
            temp = temp->next;
            mid--;
        }
        return temp;
    }
};