// Count Numbers in a given range in a BST


    int ans=0;
    int getCount(Node *root, int l, int h)
    {
        
        if(root==NULL) return ans;
        getCount(root->left,l,h);
        if(root->data>=l && root->data<=h) ans++;
        getCount(root->right,l,h);
    }