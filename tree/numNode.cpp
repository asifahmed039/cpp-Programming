



int numofNode(treeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=numofNode(root->children[i]);
    }
    return ans;

}