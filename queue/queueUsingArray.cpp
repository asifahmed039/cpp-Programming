#include<iostream>
using namespace std;

class QueueUsingArray{
    int * data;
    int nextindex;
    int firstindex;
    int size;
    int capacity=5;
    public:
    QueueUsingArray(){
        data=new int[5];
        nextindex=0;
        firstindex=-1;
        size=0;
        
    }
//give number of element in Queue.
    int getSize(){
        return size;
    }
//this function give queue is empty or not.
    bool IsEmpty(){
        return size==0;
    }

    void enqueue(int element){
        if(size==capacity){

			int *newData=new int[2*capacity];
			int j=0;
			for(int i=firstindex;i<capacity;i++){
				newData[j]=data[i];
				j++;
			}
			for(int i=0;i<firstindex;i++){
				newData[j]=data[i];
				j++;
			}

			delete [] data;
			data=newData;
			 firstindex=0;
			 nextindex=capacity;
			 capacity*=2;
           // cout<<"Queue is full"<<endl;
           // return;
        }
        data[nextindex]=element;
        nextindex=(nextindex+1)%capacity;
        if(firstindex==-1){
            firstindex=0;
        }
        size++;
    }

    int dequeue(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int ans=data[firstindex];
        firstindex=(firstindex+1)%capacity;
        size--;
        if(size==0){
            nextindex=0;
            firstindex=-1;
        }
        
        return ans;
    }

    int front(){
        if(IsEmpty()){
            cout<<"queue is empty."<<endl;
            return 0;
        }
       return data[firstindex];
    }

};  
/*

template <typename T>

class QueueUsingArray {
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

	public :
	QueueUsingArray(int s) {
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	// insert element
	void enqueue(T element) {
		if(size == capacity) {
			cout << "Queue Full ! " << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex + 1) % capacity ;
		if(firstIndex == -1) {
			firstIndex = 0;
		}
		size++;
	}
	
	T front() {
		if(isEmpty()) {
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		return data[firstIndex];
	}

	T dequeue() {
		if(isEmpty()) {
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		T ans = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if(size == 0) {
			firstIndex = -1;
			nextIndex = 0;
		}
		return ans;
	}

};  */