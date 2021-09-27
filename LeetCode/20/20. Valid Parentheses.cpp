//
//  main.cpp
//  20
//
//  Created by Karan Shah on 9/26/21.
//

#include <iostream>
#include <string>
#include <unordered_map>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::unordered_map<char, char> map = {{'[', ']'}, {'(', ')'}, {'{', '}'}};
        std::stack<char> stacks;
        if((s[0] == ']') || (s[0] == '}') || (s[0] == ')')) {
            return 0;
        }
        
        for(int i{0}; i < s.length(); i++) {
            if((s[i] == '[') || (s[i] == '{') || (s[i] == '(')) {
                stacks.push(map[s[i]]);
            }
            else {
                if(stacks.empty()) return 0;
                
                if(stacks.top() != s[i]) {
                    stacks.pop();
                    return 0;
                }
                
                stacks.pop();
            }
        }
        return stacks.empty();
        
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::string st = {"(}"};
    std::string st1 = {"{}()[]"};
    std::string st2 = {"{}()[]("};
    int i = s.isValid(st);
    int i1 = s.isValid(st1);
    int i2 = s.isValid(st2);
    std::cout << i << '\n';
    std::cout << i1 << '\n';
    std::cout << i2 << '\n';
    return 0;
}
