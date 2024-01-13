#include<iostream>
#include<queue>
#include"treeNode.h"
using namespace std;
//Print Tree
void printTree(treeNode<char>* root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
//Take tree (input) using recursion
treeNode<char>* takeInput(){
    int rootdata;
    cout<<"Enter the data:"<<endl;
    cin>>rootdata;
    treeNode<char>*root=new treeNode<char>(rootdata);
    int n;
    cout<<"enter the number of childern in this node:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        treeNode<char>*child=takeInput();
        root->children.push_back(child);
    }
    return root;
}
// treeNode<int>* takeInput01(){
//     int rootdata;
//     cout<<"enter the root data:"<<endl;
//     cin>>rootdata;
//     treeNode<int>*root=new treeNode<int>(rootdata);
//     int n;
//     cout<<"enter the number of child you want to this node.: "<<endl;
//     for(int i=0;i<n;i++){
//         treeNode<int>* child=takeInput01();
//         root->children.push_back(child);
//     }

//     return root;
// }

//take input using levelwise
treeNode<int>* takeInputLevelwise(){
    int rootdata;
    cout<<"Enter the root data:"<<endl;
    cin>>rootdata;
    treeNode<int>*root=new treeNode<int>(rootdata);
    queue<treeNode<int>*>pendingNodes;  //Queue is use to store node of tree.
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        treeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Number of childern you wants for this"<<front->data<<" "<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            cout<<"Enter the child data:"<<endl;
            int childData;
            cin>>childData;
            treeNode<int>*child=new treeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
            
        }
    }
    return root;
}


int main(){
    // treeNode<int>*root=new treeNode<int>(1);
    // treeNode<int>*node1=new treeNode<int>(2);
    // treeNode<int>*node2=new treeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    treeNode<char>* root=takeInput();
    printTree(root);
    return 0;

}