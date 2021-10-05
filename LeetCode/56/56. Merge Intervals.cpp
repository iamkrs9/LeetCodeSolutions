//
//  main.cpp
//  56
//
//  Created by Karan Shah on 9/29/21.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        std::vector<std::vector<int>> v;
        std::vector<int> in;
        std::vector<int> next;
        if(intervals.size() == 1) return intervals;
        
        std::sort(intervals.begin(), intervals.end());
        in = intervals[0];
        
        for(int i{1}; i<intervals.size(); i++) {
            next = intervals[i];
            if(next[0] <= in[1]) {
                in[1] > next[1] ? in = {in[0], in[1]} : in = {in[0], next[1]};
                //in = {in[0], next[1]};
                if(i == intervals.size()-1) {
                    v.push_back(in);
                }
            }
            else {
                v.push_back(in);
                in = next;
                if(i == intervals.size()-1) {
                    v.push_back(in);
                }
            }
        }
        
        for(auto i : v) {
            std::cout << i[0] << " " << i[1] << '\n';
        }
        return v;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::vector<std::vector<int>> intervals{{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> intervals1{{1,4}, {2,3}};
    s.merge(intervals);
    s.merge(intervals1);
    return 0;
}
