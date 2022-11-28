    int minDepth(TreeNode* root) 
    {
        if(root==NULL) return i;
        if(root->left==NULL) return 1 + minDepth(root->right);
        if(root->right==NULL) return 1 + minDepth(root->left);
        return 1 + min(minDepth(root->right),minDepth(root->left));
    }