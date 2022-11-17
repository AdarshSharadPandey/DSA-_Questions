// Function to find the minimum and maximum element in the given BST


int minValue(Node* root) 
{
    if(root==NULL) return -1;
    while(root->left)
    {
        root=root->left;
    }
    return root->data;
}


int maxValue(Node* root) 
{
    if(root==NULL) return -1;
    while(root->right)
    {
        root=root->right;
    }
    return root->data;
}