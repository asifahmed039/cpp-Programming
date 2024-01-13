template<typename T>
class Node{
    public:
    T data;
    Node *next;
    Node(T data){
        this->data=data;
        next=NULL;
    }

};
template<typename T>
class QueueUsingLL{
    int size;
    Node<T>*head;
    Node<T>*tail;
    public:
    QueueUsingLL(){
        head=NULL;
        tail=NULL; 
        size=0;
    }

    int getSize(){
        return size;
    }
     bool isEmpty(){
        return size==0;
     }

     T front(){
        if(isEmpty()){
            // cout<<" queue is empty"<<endl;
            return 0;
        }
        return head->data;
    }
    void enqueue(T data){
        Node<T> *newData=new Node<T>(data);
        if(head==NULL){
            head=newData;
            tail=newData;
        }
        else{
            tail->next=newData;
            tail=newData;
        }
        size++;
    }
T dequeue(){
    if(isEmpty()){
        return 0;

    }
    T ans=head->data;
    Node<T>*temp=head;
    head=head->next;
    delete temp;
    size--;
    return ans;



}
        
     


};