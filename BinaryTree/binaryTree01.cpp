#include<iostream>
#include"BinaryNode.h"
#include<queue>
using namespace std;

//take input levelwise 
BinaryTreeNode<int>* levelwiseTakeInput(){
   
    int rootData;
    cout<<"Enter rootdata:"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        //current node
        BinaryTreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        //left node
        cout<<"Enter left child of"<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
            BinaryTreeNode<int>*child=new BinaryTreeNode<int>(leftChildData);
            front->left=child;
            pendingNodes.push(child);
        }
//right node
        cout<<"Enter right child of"<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>*child=new BinaryTreeNode<int>(rightChildData);
            front->right=child;
            pendingNodes.push(child);
        }
    }

    return root;

}

//input Binary Tree using recursion (not a better way to take input node.)
BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter the root data:-";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>*leftChild=takeInput();
    BinaryTreeNode<int>*rightChild=takeInput();
    root->left=leftChild;
    root->right=rightChild;

    return root;
}
//print Binary Tree
void printBinaryTree(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left){//if(root->left!=NULL)
    cout<<"L"<<root->left->data<<",";
    }

if(root->right!=NULL){
    cout<<"R"<<root->right->data;
}
cout<<endl;

printBinaryTree(root->left);
printBinaryTree(root->right);

}
//print levelwise
void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
	if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        if (front->left != NULL)
        {
            cout << "L:" << front->left->data << ",";
            pendingNodes.push(front->left);
        }
        else
        {
            cout << "L:" << -1 << ",";
        }

        if (front->right != NULL)
        {
            cout << "R:" << front->right->data;
            pendingNodes.push(front->right);
        }
        else
        {
            cout << "R:" << -1;
        }
        cout << endl;
    }

}

int main(){
    // BinaryTreeNode<int>*root=new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>*node1=new BinaryTreeNode<int>(3);
    // BinaryTreeNode<int>*node2=new BinaryTreeNode<int>(4);

    // root->left=node1;
    // root->right=node2;
    BinaryTreeNode<int>*root=levelwiseTakeInput();

    printBinaryTree(root);

    return 0;
     
}