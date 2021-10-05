//
//  main.cpp
//  118
//
//  Created by Karan Shah on 10/4/21.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    /*
        Solved by myself
     */
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        vector<int> k{1};
        v.push_back(k);
        for(int i{1}; i<numRows; i++) {
            vector<int> t(i+1);
            for(int j{0}; j<t.size(); j++) {
                if(j == 0 || j == i) {
                    t[j] = 1;
                }
                else {
                    t[j] = v[i-1][j-1] + v[i-1][j];
                }
            }
            v.push_back(t);
        }
        
        for(vector<int> x : v) {
            for(int y : x) {
                cout << y << '\n';
            }
        }
        return v;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    s.generate(10);
    return 0;
}
