//
//  main.cpp
//  704
//
//  Created by Karan Shah on 9/30/21.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int j = 0;
        int s = static_cast<int>(nums.size());
        int k = s-1;
        int track{-1};
        int pivot{-1};
        
        while(j <= k) {
            pivot = j + (k-j)/2;
            if(target==nums[pivot]) {track = pivot; std::cout << track << '\n'; return pivot;}
            
            if(target>nums[pivot]) {
                j = pivot+1;
            }
            
            else {
                k = pivot-1;
            }
        }
        std::cout << track << '\n';
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::vector<int> v = {-1, 0, 1, 2, 3};
    int target = 0;
    s.search(v, target);
    return 0;
}
