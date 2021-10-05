//
//  main.cpp
//  167
//
//  Created by Karan Shah on 10/2/21.
//

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> v;
        for(int i{0}; i<numbers.size(); i++) {
            if(map.count(target - numbers[i])) {
                v.push_back(map[target - numbers[i]]+1);
                v.push_back(i+1);
                for(int i_{0}; i_<2; i_++) {
                    std::cout << v[i_] << '\n';
                }
                return v;
            }
            map[numbers[i]] = i;
        }
        for(int i_{0}; i_<2; i_++) {
            std::cout << v[i_] << '\n';
        }
        return v;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    std::vector<int> v{5,25,75, 100, 200};
    s.twoSum(v, 300);
    return 0;
}
