#include<iostream>
using namespace std;
//input array function
void arrayin(int a[],int n){
    cout<<"Enter the array.\n";
    for(int i=0;i<n;i++){
        cin>>*(a+i);
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<i[a];
        cout<<" ";
    }
}
int main(){
   
  int num[20];
  int size;
  cin>>size;
  arrayin(num,size);
  
   return 0;
}