#include<iostream>
using namespace std;
int main(){
    int i=10;
    int * q=&i;
    int * p=q;
    cout<<*p<<endl;
    cout<<i;
    return 0;
}