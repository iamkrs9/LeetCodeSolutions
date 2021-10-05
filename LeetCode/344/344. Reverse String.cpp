//
//  main.cpp
//  344
//
//  Created by Karan Shah on 10/3/21.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution_1 {
    /*
        Solved with hint
     */
public:
    void reverseString(vector<char> s) {
        int l{0};
        int r = static_cast<int>(s.size()-1);
        while(l<=r) {
            char t = s[l];
            s[l] = s[r];
            s[r] = t;
            l++;
            r--;
        }
        for(char c : s) {
            cout << c << '\n';
        }
    }
};

class Solution {
    /*
        Solved by myself
     */
public:
    void reverseString(vector<char> s) {
        vector<char> v;
        int n = static_cast<int>(s.size());
        for(int j{n-1}; j>=0; j--) {
            v.push_back(s[j]);
        }
        s = v;
        for(char c : s) {
            cout << c << '\n';
        }
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    Solution_1 s1;
    vector<char> v = {'h', 'e', 'l', 'l', 'o'};
    s.reverseString(v);
    cout << '\n';
    s1.reverseString(v);
    return 0;
}
