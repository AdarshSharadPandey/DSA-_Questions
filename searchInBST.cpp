    // Search in BST



    //Recursive Approach

    TreeNode* ans=NULL;
    TreeNode* searchBST(TreeNode* root, int key) 
    {
        if(root==NULL) return NULL;
        if(root->val==key) ans = root;
        searchBST(root->left,key);
        searchBST(root->right,key);
        return ans;
    }


    //Iterative Approach


    TreeNode* searchBST(TreeNode* root, int key) 
    {
        if(root==NULL) return NULL;
        while(root!=NULL)
        {
            if(root->val==key) return root;
            else if(root->val>key) root=root->left;
            else root=root->right;
        }
        return NULL;
    }