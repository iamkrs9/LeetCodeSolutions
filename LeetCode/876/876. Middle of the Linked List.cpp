//
//  main.cpp
//  876
//
//  Created by Karan Shah on 10/4/21.
//

#include <iostream>
using namespace std;

struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution_ {
public:
    /*
        Solution from LeetCode
     */
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        while(slow != NULL) {
            cout << slow->val << '\n';
            slow = slow->next;
        }
        return slow;
    }
};

class Solution {
    /*
        Solved by myself
     */
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* t;
        t = head;
        
        while(t->next != NULL) {
            t = t->next;
            count++;
        }
        
        if(!(count % 2 == 0)) count += 1;
        int m = count/2;
        count = 0;
        t = head;
        while(count < m) {
            t = t->next;
            count++;
        }
        while(t != NULL) {
            cout << t->val << '\n';
            t = t->next;
        }
        return t;
    }
};

int main(int argc, const char * argv[]) {
    ListNode* l1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6, new ListNode(7)))))));
    // Solution s;
    // s.middleNode(l1);
    Solution_ s1;
    s1.middleNode(l1);
    return 0;
}
