//
//  main.cpp
//  557
//
//  Created by Karan Shah on 10/3/21.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
    /*
        Solved by myself
     */
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int l{0};
        int n = static_cast<int>(s.size());
        int r{0};
        int t{0};
        
        while(r <= n) {
            if((s[r] == ' ') || s[r] == s[n]) {
                t = r-1;
                while(l <= t) {
                    char k = s[l];
                    s[l++] = s[t];
                    s[t--] = k;
                }
                l = r+1;
            }
            r++;
        }
        cout << s << '\n';
        return s;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    string str = "Let's take LeetCode contest";
    s.reverseWords(str);
    return 0;
}
