#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> *v=new vector<int>();

    vector<int> v;
    v.push_back(20);
    v.push_back(60);
    v.push_back(65);
    v.push_back(90);
    for(int i=0;i<v.size();i++){
    cout<<v.at(i);

    cout<<endl;
    }




}