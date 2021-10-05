//
//  main.cpp
//  566
//
//  Created by Karan Shah on 10/4/21.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = static_cast<int>(mat.size());
        int col = static_cast<int>(mat[0].size());
        
        if(row*col != r*c) return mat;
        
        vector<int> v;
        
        for(int i{0}; i<row; i++) {
            for(int j{0}; j<col; j++) {
                v.push_back(mat[i][j]);
            }
        }
        
        vector<vector<int>> v1(r, vector<int>(c));
        int k{0};
        
        for(int i{0}; i<r; i++) {
            for(int j{0}; j<c; j++) {
                v1[i][j] = v[k];
                k++;
            }
        }
        
        for(vector<int> x : v1) {
            for(int y : x) {
                cout << y << '\n';
            }
        }
        return v1;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<vector<int>> v = {{1,2}, {3,4}, {5,6}, {7,8}};
    s.matrixReshape(v, 2, 4);
    return 0;
}
