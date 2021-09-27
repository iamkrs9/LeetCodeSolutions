//
//  2.cpp
//  LeetCode
//
//  Created by Karan Shah on 9/6/21.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *head = new ListNode();
        
        ListNode *curr = head;
        
        int carry{0};
        
        while(l1 != NULL || l2 != NULL) {
            int a = (l1 != NULL) ? l1->val : 0;
            int b = (l2 != NULL) ? l2->val : 0;
            
            int sum = a + b + carry;
            
            std::cout << a << ' ' << b << ' ' << sum << '\n';
            carry = sum / 10;
            
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
        }
        
        if(carry > 0) {
            curr->next = new ListNode(carry);
        }
        
        return head->next;
        
    }
};

int main() {
    ListNode *l1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
    // l1->next = new ListNode(4);
    // l1->next = new ListNode(3);
    
    ListNode *l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
    
    Solution s;
    ListNode *now = s.addTwoNumbers(l1, l2);
    
    for(int i{0}; i<8; i++) {
        std::cout << now->val << '\n';
        now = now->next;
    }
}
