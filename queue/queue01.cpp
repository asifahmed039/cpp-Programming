#include<iostream>
#include"queueUsingll.cpp"
using namespace std;
int main(){
  QueueUsingLL<int> s1;

  s1.enqueue(20);
  s1.enqueue(46);
  s1.enqueue(39);
  s1.enqueue(50);
  s1.enqueue(48); 
  s1.enqueue(89);

  cout<<s1.getSize()<<endl;
  cout<<s1.dequeue()<<endl;
  cout<<s1.isEmpty()<<endl;
  cout<<s1.front();

  return 0;
   
}