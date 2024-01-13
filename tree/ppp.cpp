#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class treeNode{
    public:
    T data;
    vector<treeNode<T>*>children;
    treeNode(T data){
        this->data=data;
    }
};
treeNode<int>* inputTree(){
    int data;
    cout<<"Enter the data of tree:"<<endl;
    cin>>data;
    treeNode<int>*root=new treeNode<int>(data);
    int num;
    cout<<"Enter the number of children of this node.:";
    cin>>num;
    for(int i=0;i<num;i++){
        treeNode<int>*child=inputTree();
        root->children.push_back(child);

    }
    return root;
}
//levelwise input  
treeNode<int>* takeInput(){
    int data;
    cout<<"Enter the root data:"<<endl;
    cin>>data;
    treeNode<int>*root=new treeNode<int>(data);
    queue<treeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        treeNode<int>* first=pendingNodes.front();
        pendingNodes.pop();
        int numchild;
        cout<<"Enter the number of child for tis node:"<<endl;
        cin>>numchild;
        for(int i=0;i<numchild;i++){
            int childData;
            cout<<" Enter the child data:"<<endl;
            cin>>childData;
            treeNode<int>*child=new treeNode<int>(childData);
            first->children.push_back(child);
            pendingNodes.push(child);
        }
        
    }

         return root;
}
//number of node in tree.
int numofNode(treeNode<int>* root){
    int ans=1;
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data;
        if(i<root->children.size()-1){
            cout<<",";
        }
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        ans+=numofNode(root->children[i]);
        
    }
    return ans;

}

void printTree(treeNode<int>*root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";

    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

int main(){
    // treeNode<int>*root=new treeNode<int>(10);
    // treeNode<int>*node01=new treeNode<int>(20);
    // treeNode<int>*node2=new treeNode<int>(49);
    // root->children.push_back(node01);
    // root->children.push_back(node2);
    treeNode<int>*root=takeInput();
    int c=numofNode(root);
    cout<<endl;
    cout<<c;
    return 0;
}