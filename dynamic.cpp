#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    int *q=new int;
    char*r=new char[18];

    cout<<"Enter your name:"<<" ";
    cin>>r;
    
    cout<<"Enter the two numbers:"<<endl;
    cin>>*p>>*q;
    cout<<(*p)+(*q);
    return 0;
}