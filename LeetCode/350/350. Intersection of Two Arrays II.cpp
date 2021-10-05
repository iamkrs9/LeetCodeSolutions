//
//  main.cpp
//  350
//
//  Created by Karan Shah on 10/3/21.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    /*
        Solved by myself
     */
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> v;
        vector<int> x;
        vector<int> f;
        int s;
        int m = static_cast<int>(nums1.size());
        int n = static_cast<int>(nums2.size());
        if(m < n) {
            v = nums2;
            x = nums1;
            s = m;
        }
        else {
            v = nums1;
            x = nums2;
            s = n;
        }
        
        for(int i{0}; i<v.size(); i++) {
            if(map.count(v[i])) {
                map[v[i]]++;
            }
            else {
                map[v[i]] = 1;
            }
        }

        for(int j{0}; j<s; j++) {
            if(map[x[j]]) {
                f.push_back(x[j]);
                map[x[j]]--;
            }
        }
        for(int l : f) {
            cout << l << '\n';
        }
        return f;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> v1 = {1,2,2,1};
    vector<int> v2 = {2,2};
    s.intersect(v1, v2);
    return 0;
}
