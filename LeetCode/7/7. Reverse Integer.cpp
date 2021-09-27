//
//  main.cpp
//  3
//
//  Created by Karan Shah on 9/7/21.
//

#include <iostream>

class Solution {
public:
    int reverse(int x) {
        int rev{0};
        while(x!=0) {
            int last = x%10;
            std::cout << last << '\n';
            x /= 10;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && last > INT_MAX%10)) return 0;
            if(rev < INT_MIN/10 || (rev == INT_MIN/10 && last < INT_MIN%10)) return 0;
            rev = rev*10 + last;
        }
        std::cout << rev << '\n';
        return rev;
        
    }
};

int main() {
    Solution s;
    s.reverse(123);
    s.reverse(-321);
    s.reverse(0);
    s.reverse(120);
}
