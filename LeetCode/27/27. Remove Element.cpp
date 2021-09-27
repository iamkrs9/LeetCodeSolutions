//
//  main.cpp
//  27
//
//  Created by Karan Shah on 9/26/21.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int i{0};
        for(int j{0}; j < nums.size(); j++) {
            if(nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
            
        }
        return i;
        
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
    int i = s.removeElement(v, 3);
    std::cout << i << '\n';
    return 0;
}
