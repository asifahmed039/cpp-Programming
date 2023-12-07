#include<iostream>
#include"stack.cpp"
using namespace std;
int main(){
    stackUsingArray s1;
    s1.push(200);
    s1.push(400);
    s1.push(100);
    s1.push(500);
    s1.push(600);
    s1.push(800);
    s1.push(560);

    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.size()<<endl;

    cout<<s1.isEmpty();
    return 0;

}