#include<iostream>
//include vector file
#include<vector>
using namespace std;
int main(){
    // vector<int> *v2=new vector<int>();//dynamic allocation.
    vector<int> v;//staic allocation
    //use push_back() to insert elements because this function contain feature/function of in of size increase.
    //don't use v[i] method for inserting an elements.
    //v[i] use for get and update only.
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for(int i=0;i<100;i++){
        cout<<"cap:"<<v.capacity()<<endl;
        cout<<"size"<<v.size()<<endl;
        v.push_back(i+1);
    }
    //  for(int i=0;i<v.size();i++){
    //     v.at();
    //     cout<<" ";
    // }

   // v[1]=100;
    //v[3]=1002;
   // v[4]=1234;

   // v.push_back(23);
    //v.push_back(234);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;




}