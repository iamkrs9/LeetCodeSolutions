//
//  main.cpp
//  9
//
//  Created by Karan Shah on 9/7/21.
//

#include <iostream>
#include <cmath>

class Solution {
public:
    bool isPalindrome(int x) {
        int rev{0};
        int num{x};
        if(x < 0) return 0;
        
        while(x!=0) {
            int last = x%10;
            x /= 10;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && last > INT_MAX%10)) return 0;
            if(rev < INT_MIN/10 || (rev == INT_MIN/10 && last < INT_MIN%10)) return 0;
            rev = rev*10 + last;
        }
        if(rev == num) return 1;
        else return 0;
        
    }
};

int main() {
    Solution s;
    std::cout << s.isPalindrome(121) << '\n';
    std::cout << s.isPalindrome(-121) << '\n';
    std::cout << s.isPalindrome(0) << '\n';
    std::cout << s.isPalindrome(1221) << '\n';
}
