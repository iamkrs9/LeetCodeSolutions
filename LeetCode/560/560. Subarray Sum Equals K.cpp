//
//  main.cpp
//  560
//
//  Created by Karan Shah on 9/26/21.
//

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution_long {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int sum[nums.size()+1];
        int count{0};
        sum[0] = 0;
        
        for(int i{1}; i<=nums.size(); i++) {
            sum[i] = sum[i-1] + nums[i-1];
            }
        for(int start{0}; start < nums.size(); start++) {
            for(int end = start + 1; end<=nums.size(); end++){
                if(sum[end] - sum[start] == k) {
                    count++;
                }
            }
        }
        
        return count;
    }
};

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> map;
        int sum{0};
        int count {0};
        map[0] = 1;
        
        for(int i{0}; i < nums.size(); i++) {
            sum += nums[i];
            if(map[sum-k]){
                count += map[sum-k];
            }
            map[sum] = map[sum] + 1;
            // std::cout << map[sum] << '\n';
        }
        
        return count;
    }
};

int main(int argc, const char * argv[]) {
    std::vector<int> v = {1, 1, 1, 1, 1, 1, 1};
    int k = 8;
    
    Solution s;
    Solution_long s1;
    
    int i = s.subarraySum(v, k);
    int i1 = s1.subarraySum(v, k);
    
    std::cout << i << '\n';
    std::cout << i1 << '\n';
    
    return 0;
}
