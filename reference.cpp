#include<iostream>
using namespace std;
int main(){
    char ch;
    ch='b';
    char &b=ch;
    //Reference variables must be initilize during theirs declarations.
    //b=ch is wrong.
    cout<<ch<<" "<<b;
    int a=65;
    ch=a;
    cout<<" ";
    cout<<ch<<" "<<b;
    return 0;
}