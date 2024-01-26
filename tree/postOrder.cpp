void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    if (root == NULL)
    {
        return;
    }
       //pre order 
    //cout<<root->data<<" ";
    for (int i = 0; i < root->children.size(); i++)
    {
        printPostOrder(root->children[i]);
    }
    //post order
    cout << root->data << " ";
}