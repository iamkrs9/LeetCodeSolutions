//
//  main.cpp
//  19
//
//  Created by Karan Shah on 10/4/21.
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
    /*
        Solved by myself
     */
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 1;
        ListNode* t;
        t = head;
        
        while(t->next != NULL) {
            t = t->next;
            count++;
        }
        if(count == 1) return head->next;
        int k = count - n + 1;
        if(k == 1) {head = head->next; return head;}
        std::cout << k;
        count = 0;
        t = head;
        while(count < k-2) {
            std::cout << t->val << '\n';
            t = t->next;
            count++;
        }
        t->next = t->next->next;
        return head;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    ListNode* l1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    s.removeNthFromEnd(l1, 2);
    return 0;
}
