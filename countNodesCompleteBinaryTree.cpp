// Count nodes in Complete Binary Tree



/** 1. Recursively counting the number of nodes

Recursively count the number of nodes in the left subtree and right tree. Then, return the 1 + no_of_left_nodes + no_of_right_nodes; Complexities:
TC: O(N)    SC: O(height of the tree) **/

class Solution {
public:
    
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};








/** 2. Comparing the height of left and right boundary
For each node, traverse left and right boundary and store its height in two seperate variables.
Now, there arise two case:-

Case 1: if left and right boundaries are equal, return pow (2, left_height)-1 (Nodes at each level are in Geometric Progression (GP))

Case 2: If ther are not equal, repeat the above process for the left subtree and right subtree of the node. 
TC: O(logn * logn) SC: O(height of the tree)             **/

class Solution {
public:
    
    int helper (TreeNode *root){
        
        if (root == NULL) return 0;
        
        auto ptr1 = root;
        auto ptr2 = root;
        
        int left_height = 0;
        int right_height = 0;
        
        while (ptr1) ptr1 = ptr1 -> left, left_height++;
        while (ptr2) ptr2 = ptr2 -> right, right_height++;
        
        if (left_height == right_height) return pow (2,left_height)-1;
        
        return helper (root->left) + helper (root->right) + 1;        
    }
    int countNodes(TreeNode* root) {
        return helper (root);
    }
};
