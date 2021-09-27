//
//  main.cpp
//  1041
//
//  Created by Karan Shah on 9/27/21.
//

#include <iostream>

class Solution {
public:
    bool isRobotBounded(std::string instructions) {
        int v[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        // std::vector<tuple<int, int>> v = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        int x = 0;
        int y = 0;
        int idx = 0;
        
        for(char c : instructions) {
            if(c == 'L') {
                idx = (idx + 3)%4;
            }
            else if(c == 'R') {
                idx = (idx + 1)%4;
            }
            else {
                x += v[idx][0];
                y += v[idx][1];
            }
        }
        
        return (x==0 && y==0) || (idx!=0);
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::string str = "GRGLGLLRRGLGL";
    int i = s.isRobotBounded(str);
    std::cout << i << '\n';
    return 0;
}
