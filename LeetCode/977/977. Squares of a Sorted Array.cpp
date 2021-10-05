//
//  main.cpp
//  977
//
//  Created by Karan Shah on 10/1/21.
//

#include <iostream>
#include <vector>

class Solution_Sort {
    /*
        Solved by myself
     */
public:
    std::vector<int> sortedSquares(std::vector<int> nums) {
        for(int i{0}; i<nums.size(); i++) {
            nums[i] = nums[i]*nums[i];
        }
        std::sort(nums.begin(), nums.end());
        for(int i{0}; i<nums.size(); i++) {
            std::cout << nums[i] << ' ';
        }
        return nums;
    }
};

class Solution_BST {
    /*
        Solved by myself
     */
public:
    struct BSTNode {
        int data;
        BSTNode* left;
        BSTNode* right;
    };
    
    BSTNode* BSTNewNode(int data) {
        BSTNode* newnode = new BSTNode;
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    
    BSTNode* insert(BSTNode* root, int data) {
        if(root == NULL) {
            root = BSTNewNode(data);
        }
        else if(data <= root->data) {
            root->left = insert(root->left, data);
        }
        else {
            root->right = insert(root->right, data);
        }
        return root;
    }
    
    void inorder(BSTNode* root, std::vector<int> &n) {
        if(root == NULL) return;
        inorder(root->left, n);
        n.push_back(root->data);
        std::cout << root->data << ' ';
        inorder(root->right, n);
        return;
    }
    
    std::vector<int> sortedSquares(std::vector<int> nums) {
        BSTNode* root = NULL;
        root = insert(root, nums[0]*nums[0]);
        
        for(int i{1}; i<nums.size(); i++) {
            root = insert(root, nums[i]*nums[i]);
        }
        
        std::vector<int> n;
        inorder(root, n);
        return n;
    }
};

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int> nums) {
        int left{0};
        std::vector<int> r(nums.size());
        int right = static_cast<int>(nums.size()-1);
        
        for(int i{right}; i>=0; i--) {
            int s;
            if(abs(nums[left]) < abs(nums[right])) {
                s = nums[right];
                right--;
            }
            
            else {
                s = nums[left];
                left++;
            }
            r[i] = s*s;
        }
        for(int k{0}; k<r.size(); k++) {
            std::cout << r[k] << ' ';
        }
        return r;
    }
};

int main(int argc, const char * argv[]) {
    Solution_BST s;
    Solution_Sort s1;
    Solution s2;
    std::vector<int> v = {-5, -4, -3, -2, -1};
    std::vector<int> v1 = {-5, -4, -3, -2, -1};
    s.sortedSquares(v);
    std::cout << '\n';
    std::cout << '\n';
    s1.sortedSquares(v);
    std::cout << '\n';
    std::cout << '\n';
    s2.sortedSquares(v);
    std::cout << '\n';
    std::cout << '\n';
    return 0;
}
