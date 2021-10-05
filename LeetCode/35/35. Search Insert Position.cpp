//
//  main.cpp
//  35
//
//  Created by Karan Shah on 9/30/21.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int s = static_cast<int>(nums.size());
        int j = 0;
        int i;
        int k = s-1;
        
        while(j <= k) {
            i = j + (k-j)/2;
            if(nums[i] == target) return i;
            
            else if(nums[i] > target) {
                k = i-1;
            }
            
            else {
                j = i + 1;
            }
        }
        
        std::cout << j << '\n';
        return j;
        
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::vector<int> v = {1,3,5,6};
    int target = 2;
    s.searchInsert(v, target);
    return 0;
}
