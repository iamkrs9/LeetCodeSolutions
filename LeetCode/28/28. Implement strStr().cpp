//
//  main.cpp
//  28
//
//  Created by Karan Shah on 9/29/21.
//

#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int n = static_cast<int>(needle.length());
        int h = static_cast<int>(haystack.length());
        
        if(n==0) return 0;
    
        for(int i{0}; i<=h-n; i++) {
            std::string temp = haystack.substr(i, n);
            if(temp == needle) return i;
        }
        
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::string haystack = "hello";
    std::string needle = "ll";
    s.strStr(haystack, needle);
    
    return 0;
}
