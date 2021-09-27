//
//  main.cpp
//  121
//
//  Created by Karan Shah on 9/26/21.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int i{0};
        int sum{0};
        int n = static_cast<int>(prices.size());
        int end = prices[n-1];
        for(int j{1}; j < prices.size(); j++) {
            // std::cout << i << '\n';
            if(prices[i] <= prices[j]) {
                sum = std::max(sum, prices[j] - prices[i]);
                //std::cout << sum << '\n';
            }
            else if((prices[j] < prices[i]) and (prices[j] != end)) {
                i = j;
            }
            
            else {
                i++;
            }
        }
        
        return sum;
    }
};

int main(int argc, const char * argv[]) {
    std::vector<int> v = {7, 1, 5, 3, 6, 4};
    Solution s;
    int i = s.maxProfit(v);
    std::cout << i << '\n';
    return 0;
}
