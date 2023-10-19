#include<iostream>
using namespace std;
int main(){
     int f,s;
     int * p1,*p2;
     p1=&f;
     p2=&s;
     cout<<"Enter the value of first =";
     cin>>f;
     *p2=*p1;
     cout<<f<<" "<<s;
     return 0;
     
}