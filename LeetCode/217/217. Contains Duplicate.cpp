//
//  main.cpp
//  217
//
//  Created by Karan Shah on 9/30/21.
//

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution_Sort {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        
        for(int i{0}; i<nums.size()-1; i++) {
            if(nums[i] == nums[i+1]) {std::cout << "TRUE" << '\n'; return 1;}
        }
        
        std::cout << "FALSE" << '\n';
        return 0;
    }
};

class Solution_HashMap {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, int> map;
        
        for(int x : nums) {
            if(map.count(x)) {std::cout << "TRUE" << '\n'; return 1;}
            
            map[x] = 1;
        }
        
        std::cout << "FALSE" << '\n';
        return 0;
    }
};

int main(int argc, const char * argv[]) {
    Solution_Sort s;
    Solution_HashMap h;
    std::vector<int> v = {1, 2, 3, 4, 1};
    s.containsDuplicate(v);
    h.containsDuplicate(v);
    return 0;
}
