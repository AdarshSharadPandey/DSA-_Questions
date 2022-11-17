// Return the Kth smallest element in the given BST
    
    vector<int> v;
    void inOrder(Node* root)
    {
        if(root==NULL) return;
        inOrder(root->left);
        v.push_back(root->data);
        inOrder(root->right);
    }
    int KthSmallestElement(Node *root, int k) 
    {
        v.clear();
        inOrder(root);
        int n=v.size();
        if(k>n) return -1;
        return v[k-1];
    }