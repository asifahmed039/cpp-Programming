#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<name[2];//not prefered way to access string.
    //use at()function 
    for(int i=0;i<name.length();i++){
        cout<<name.at(i)<<"\n";
    }

    for(char ch:name){
        cout<<ch<<" ";
    }
}