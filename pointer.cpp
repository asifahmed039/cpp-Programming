#include<iostream>
using namespace std;

void fun( int ** p){
     cout<<(**p);
    
}

int main(){
    int a=10;
    void *ptr=0;   //All in one pointer its contain the address of all pointer
     //but during dereferance type casting is needed.
    ptr=&a;
    char ch='a';
    ptr=&ch;
    
    cout<<*(char *)ptr<<endl;

    cout<<ptr;

    return 0;

}