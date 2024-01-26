#include<iostream>
using namespace std;
int main(){
    /*getline() function*/
    string name;
    int age;
    cin>>age;//28\n
    cin.ignore(1);//ignore one char //28
    // getline() methods terminate when its read "\n" or enter .
    getline(cin,name);//28Asif Ahmed
    cout<<name<<" "<<age;//output is _28 not read string name value.
    //Asif Ahmed 28


    /*String and its Operators*/
    string a,b;
    cin>>a>>b;
    //==
    if(a==b) cout<<"yes";
    else cout<<"no";

    //<
    //abcde
    //abdef
    if(a>b) cout<<"a>b";
    else cout<<"b>a";
    
    return 0;
    
}