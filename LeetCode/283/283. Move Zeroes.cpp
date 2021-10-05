//
//  main.cpp
//  283
//
//  Created by Karan Shah on 10/2/21.
//

#include <iostream>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int l{0};
        int r{1};
        if(nums.size()==0 || nums.size()==1) return;
        
        while(r<nums.size()) {
            if(!nums[l]) {
                
                if(nums[r]) {
                    int temp = nums[l];
                    nums[l] = nums[r];
                    nums[r] = temp;
                    l++;
                    r++;
                }
                else {
                    r++;
                }
            }
            else{
                l++;
                r++;
            }
        }
        for(int i{0}; i<nums.size(); i++) {
            std::cout << nums[i] << '\n';
        }
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::vector<int> v = {1, 0, 1, 3, 12};
    std::vector<int> v1 = {0, 0, 0, 0, 1};
    s.moveZeroes(v);
    s.moveZeroes(v1);
    return 0;
}
