//
//  main.cpp
//  53
//
//  Created by Karan Shah on 10/2/21.
//

#include <iostream>
#include <vector>

class Solution_BruteForce {
    /*
        Solved with hint
     */
public:
    int maxSubArray(std::vector<int>& nums) {
        int max_sub = INT_MIN;
        for(int i{0}; i<nums.size(); i++) {
            int new_s = 0;
            for(int j{i}; j<nums.size(); j++)
            {
                new_s += nums[j];
                max_sub = std::max(max_sub, new_s);
            }
        }
        std::cout << max_sub << '\n';
        return max_sub;
    }
};

class Solution {
    /*
        Solved by myself
     */
public:
    int maxSubArray(std::vector<int>& nums) {
        int max_sub = INT_MIN;
        for(int i{0}; i<nums.size(); i++) {
            int new_s = 0;
            for(int j{i}; j<nums.size(); j++)
            {
                new_s += nums[j];
                max_sub = std::max(max_sub, new_s);
            }
        }
        std::cout << max_sub << '\n';
        return max_sub;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    Solution_BruteForce s1;
    std::vector<int> v = {-2,1000000000,-3,4,-1,2,1,-5,4};
    s.maxSubArray(v);
    s1.maxSubArray(v);
    return 0;
}
