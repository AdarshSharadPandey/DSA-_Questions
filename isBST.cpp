// IS GIVEN BINARY TREE A BST?

/** 
We can think like visit every node and check if left element is less than node and right element is greater than node. 
But the approach fails when there is a tree like:
    3
   / \
  1   4
     / \
    2   5
Here 2 is less than root but in right but still it would show true as 2<4 and 5>4.
So we think of other approach.
**/


/** If we check wheather the inOrder traversal of Binary tree is sorted or not we can say that is bst or not **/

    vector<int> v;
    void inOrder(TreeNode* root)
    {
        if(root==NULL) return;
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }
    bool isSorted(vector<int> arr)
    {
        for(int i=0;i<arr.size()-1;i++)
            if(arr[i]>=arr[i+1])
                return false;
        return true;
    }
    bool isValidBST(TreeNode* root) {
        if (root==NULL) return true;
        v.clear();
        inOrder(root);
        return isSorted(v);
    }