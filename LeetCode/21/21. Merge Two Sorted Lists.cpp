//
//  main.cpp
//  21
//
//  Created by Karan Shah on 9/13/21.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head;
        ListNode* ptr = new ListNode();
        head = ptr;
        int i{0};
        
        while(l1 != NULL and l2 != NULL ){
            if(l1->val <= l2->val){
                ptr->next = new ListNode(l1->val);
                ptr = ptr->next;
                l1 = l1->next;
            }
            
            else{
                ptr->next = new ListNode(l2->val);
                ptr = ptr->next;
                l2 = l2->next;
            }
        }
        
        l1 == NULL ? ptr->next = l2 : ptr->next = l1;
        
        while(head->next != NULL){
            /* This would print an additional zero at the beginning because the head node points to ptr node whose 1st entry is val=0 */
            
            std::cout << head->val << '\n';
            head = head->next;
        }
        
        return head->next;
    }
};


int main(int argc, const char * argv[]) {
    ListNode *l1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
    ListNode *l2 = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(4))));
    Solution s;
    s.mergeTwoLists(l1, l2);
    ListNode *l3 = new ListNode(1);
    ListNode *l4 = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(4, new ListNode(90, new ListNode(91))))));
    s.mergeTwoLists(l3, l4);
    
    return 0;
}
