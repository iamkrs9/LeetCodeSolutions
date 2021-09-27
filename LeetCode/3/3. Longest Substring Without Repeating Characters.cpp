//
//  main.cpp
//  3
//
//  Created by Karan Shah on 9/11/21.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring_BruteForce(string s) {
        int len = static_cast<int>(s.length());
        
        int max_l = 0;
        for(int i{0}; i < len; i++) {
            for(int j{i}; j < len; j++) {
                if(checkRepetition(s, i, j)) {
                    max_l = max(max_l, j - i + 1);
                }
            }
        }
        return max_l;
    }
        
        bool checkRepetition(string s, int start, int end) {
            vector<int> chars(128);
            
            for(int i{start}; i <= end; i++) {
                chars[s[i]]++;
                if(chars[s[i]] > 1) {
                    return false;
                }
            }
            return true;
        }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std:: cout << s.lengthOfLongestSubstring_BruteForce("abcabcdabcdefghh") << '\n' << '\n';
    return 0;
}
