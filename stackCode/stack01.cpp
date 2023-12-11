#include<iostream>
#include"stackUll.cpp"
using namespace std;
int main(){
    StackUsingLinkedlist s;
    s.push(200);
    s.push(400);
    s.push(100);
    s.push(500);
    s.push(600);
    s.push(800);
    s.push(560);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getSize()<<endl;

    cout<<s.isEmpty();
    return 0;

}