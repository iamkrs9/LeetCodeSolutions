//
//  main.cpp
//  88
//
//  Created by Karan Shah on 10/4/21.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /*
        Solved from solution
     */
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        if(m == 0) {nums1=nums2; return;}
        if(n==0) return;
        
        int p = m+n-1;
        int p1 = m-1;
        int p2 = n-1;
        
        for(p; p>=0; p--) {
            if(p2 < 0) {
                break;
            }
            
            if(p1>=0 && nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1--];
            }
            else {
                nums1[p] = nums2[p2--];
            }
        }
        for(int x : nums1) {
            cout << x << '\n';
        }
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> v1 = {1, 2, 3, 0, 0, 0};
    vector<int> v2 = {2, 5, 6};
    s.merge(v1, 3, v2, 3);
    return 0;
}
