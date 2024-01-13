
//prac 02
#include<iostream>
#include<queue>
template<typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode*left;
    BinaryTreeNode*right;
    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;

    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
using namespace std;

//takeInput levelwise
BinaryTreeNode<int>* takeInputlevelwise(){
    //root node
    int rootData;
    cout<<"Enter the root data:-";
    cin>>rootData;
    if(rootData==-1){
        return NULL;

    }
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        BinaryTreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        //left node
        int leftChildData;
        cout<<"Enter the left child data of "<<front->data<<":-";
        cin>>leftChildData;
        if(leftChildData!=-1){
            BinaryTreeNode<int>*child=new BinaryTreeNode<int>(leftChildData);
            front->left=child;
            pendingnodes.push(child);

        }
        //right node
        int rightChildData;
        cout<<"Enter the right node of "<<front->data<<":-";
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>*child=new BinaryTreeNode<int>(rightChildData);
            front->right=child;
            pendingnodes.push(child);
        }
    }

    return root;


}
//take input recursively.

BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter the root data:-";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>*leftChuld=takeInput();
    BinaryTreeNode<int>*rightChild=takeInput();
    root->left=leftChuld;
    root->right=rightChild;

    return root;

}

void printbt(BinaryTreeNode<int>*root){

    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left){
        cout<<"L="<<root->left->data<<",";
    }
    if(root->right){
        cout<<"R="<<root->right->data;
    }
    cout<<endl;
    printbt(root->left);
    printbt(root->right);
}

int main(){
    BinaryTreeNode<int>*root=takeInputlevelwise();
    printbt(root);
    return 0;
}

//prac 01

// #include<iostream>
// template<typename T>
// class BinaryTreeNode{
//     public:
//     //node data
//     T data;
//     //child node left right
//     BinaryTreeNode*left;
//     BinaryTreeNode*right;

//     //constructor for object

//     BinaryTreeNode(T data){
//         this->data=data;
//         left=NULL;
//         right=NULL;
//     }
//     //destructor for delete object space from memory

//     ~BinaryTreeNode(){
//         delete left;
//         delete right;
//     }


// };

// using namespace std;

// BinaryTreeNode<int>* takeInput(){
//     int rootData;
//     cout<<"Enter the data:";
//     cin>>rootData;
//     if(rootData==-1){
//         return NULL;
//     }
//     BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
//     BinaryTreeNode<int>*leftChild=takeInput();
//     BinaryTreeNode<int>*rightChild=takeInput();
//     root->left=leftChild;
//     root->right=rightChild;

//     return root;
    


// }
// //print binary tree.
// void printBinaryTree(BinaryTreeNode<int>*root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<":";
//     if(root->left){
//         cout<<"L-"<<root->left->data<<",";
//     }
//     if(root->right){
//         cout<<"R-"<<root->right->data;
//     }

//     cout<<endl;

//     printBinaryTree(root->left);
//     printBinaryTree(root->right);

// }
//                           //main function
// int main(){
//     BinaryTreeNode<int>*root=takeInput();
//     printBinaryTree(root);
//     return 0;
// }