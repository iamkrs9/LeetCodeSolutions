//
//  main.cpp
//  LeetCode
//
//  Created by Karan Shah on 9/6/21.
//

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution_UnorderedMap {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> v;
        for(int i{0}; i < nums.size(); i++){
            map[nums[i]] = i;
        }
        
        for(int j{0}; j < nums.size(); j++){
            int com = target - nums[j];
            if(map[com] and map[com] != j){
                v.push_back(j);
                v.push_back(map[com]);
                for(int i{0}; i<v.size(); i++) {
                    std::cout << v[i] << '\n';
                }
                return v;
            }
        }
        for(int i{0}; i<v.size(); i++) {
            std::cout << v[i] << '\n';
        }
        return v;
    }
};

class Solution_UnorderedMap_OnePass {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> v;
        for(int i{0}; i < nums.size(); i++){
            int com = target - nums[i];
            //std::cout << com << '\n';
            if(map[com]){
                v.push_back(i);
                v.push_back(map[com]-1);
                for(int i{0}; i<v.size(); i++) {
                    std::cout << v[i] << '\n';
                }
                return v;
            }
            map[nums[i]] = i+1;
        }
        for(int i{0}; i<v.size(); i++) {
            std::cout << v[i] << '\n';
        }
        return v;
    }
};

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> out;
        for(int i{0}; i<nums.size(); i++){
            int total = 0;
            total += nums[i];
            for(int j{i+1}; j<nums.size(); j++){
               if(i == j){
                   ;
               }
               else{
                   total += nums[j];
                   if(total == target){
                       out.push_back(i);
                       out.push_back(j);
                       for(int i{0}; i<out.size(); i++) {
                           std::cout << out[i] << '\n';
                       }
                       return out;
                   }
                   else{
                       total -= nums[j];
                   }
               }
            }
        }
        for(int i{0}; i<out.size(); i++) {
            std::cout << out[i] << '\n';
        }
        return out;
    }
};

int main() {
    Solution s;
    std::vector<int> v = {2, 7, 11, 15};
    int t{9};
    Solution_UnorderedMap a;
    Solution_UnorderedMap_OnePass b;
    
    
    s.twoSum(v, t);
    a.twoSum(v, t);
    b.twoSum(v, t);
}
