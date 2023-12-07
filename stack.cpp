#include<climits>
#include<iostream>
using namespace std;
class stackUsingArray
{
private:
    int*data;
    int nextIndex;
    int capacity;
public:
    stackUsingArray(){
        data=new int[5];
        nextIndex=0;
        capacity=5;
    }
    //return total number of elements present in my stack
    int size(){
        return nextIndex;
    }

    //check stack is empty or not

    bool isEmpty(){
        /*
        if(nextIndex==0){
            return true;
        }
        else{
            return false;
        }
        */

       return nextIndex==0;
        
    }
    //insert elements
    void push(int element){
        if(nextIndex==capacity){

            int * newData=new int[capacity*2];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity*=2;
            delete [] data;
            data=newData;
           // cout<<"Stack is full"<<endl;
           // return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    // Delete an elements from stack.

     int pop(){
        if(isEmpty()){//size()==0 or nextIndex==0.
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
     }

     //Accsess an element

     int top(){
        if(nextIndex==0){//size()==0 or IsEmpty()==0.
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
     }


    
};


