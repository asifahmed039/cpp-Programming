
#include<iostream>
using namespace std;
template <typename T>

class stackUsingArray{
    private:
        T * data;
        int nextIndex;
        int capacity;
    public:
        stackUsingArray(){
            data=new T(4);
            nextIndex=0;
            capacity=4;
        }
        int size(){
            return nextIndex;
        }   
        bool isEmpty(){
            return nextIndex==0;
        } 

        void push(T element){
            if(nextIndex==capacity){
                T*newData=new T(2*capacity);
                for(int i=0;i<capacity;i++){
                    newData[i]=data[i];
                } 
                capacity *=2;
                delete [] data;
                data=newData;
            }
            data[nextIndex]=element;
            nextIndex++;
        }

        T pop(){
            if(isEmpty()){
                cout<<"Stack empty";
                return 0;
            }
            nextIndex--;
            return data[nextIndex];
        }
        T top()
        {
            if(isEmpty()){
                cout<<"stacl is empty.";
                return 0;
            }
            return data[nextIndex-1];
        }

};