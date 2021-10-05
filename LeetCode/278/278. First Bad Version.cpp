//
//  main.cpp
//  278
//
//  Created by Karan Shah on 9/30/21.
//

#include <iostream>

class Solution {
    int bad;
    bool isBadVersion(int p) {
        if(p >= bad) return 1;
        return 0;
    }
    
public:
    Solution(int b) {
        bad = b;
        std::cout << bad << '\n';
    }
    
    int firstBadVersion(int n) {
        int j = 1;
        int k = n;
        
        while(j < k) {
            int p = j + (k-j)/2;
            if(isBadVersion(p)) {
                k = p;
            }
            else {
                j = p + 1;
            }
        }
        std::cout << j;
        return j;
        
    }
};

int main(int argc, const char * argv[]) {
    Solution s(5);
    s.firstBadVersion(5);
    
    return 0;
}
