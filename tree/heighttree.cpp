


int getHeight(TreeNode<int>* root) {
    // Write your code here
    if (root == NULL)
    {
        return 0;
    }
    int h = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int childH = getHeight(root->children[i]);
        if (childH > h)
        {
            h = childH;
        }
    }           
    return h + 1;
}