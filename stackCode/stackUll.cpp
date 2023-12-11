#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node( int data){
        this->data=data;
        next=NULL;
    }
};

class StackUsingLinkedlist{
    Node* head;
    int size;  //contain the of elements in stack.
    public:
    StackUsingLinkedlist(){
        head=NULL;
        size=0;
    }

    int getSize(){

        return size;
    }
    bool isEmpty(){
        return head==NULL;   //or size==0
    }

    void push(int element){
        Node*newNode=new Node(element);
        newNode->next=head;
        head=newNode;
        size++;

    }

   int pop(){
        if(isEmpty()){
            return 0;
        }
        int ans=head->data;
        Node*temp=head;
        head=head->next;
        
        delete[]temp;
        size--;
        return ans;
    }
    int top(){
        return head->data;
    }

};