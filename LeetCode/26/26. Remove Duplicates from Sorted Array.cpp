//
//  main.cpp
//  26
//
//  Created by Karan Shah on 9/26/21.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int i{0};
        for(int j{1}; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                nums[i+1] = nums[j];
                i++;
            }
            
        }
        for(int k{0}; k<=i; k++) {
            std::cout << nums[k] << '\n';
        }
        return i+1;
        
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::vector<int> v = {0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 6, 7, 7, 8};
    s.removeDuplicates(v);
    return 0;
}
