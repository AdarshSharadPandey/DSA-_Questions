// Kth largest element in the given BST 


class Solution
{
    public:
    vector<int> v;
    void inOrder(Node* root)
    {
        if(root==NULL) return;
        inOrder(root->left);
        v.push_back(root->data);
        inOrder(root->right);
    }
    int kthLargest(Node *root, int k)
    {
        v.clear();
        inOrder(root);
        int n=v.size();
        return v[n-k];
    }
};