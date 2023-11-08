#include<iostream>
using namespace std;

int main(){
    int i=65;
    char ch=i;
    int *p=&i;
    char*ptr=(char*)p;
    cout<<*ptr;

}