#include<iostream>
using namespace std;
void display_fun(char &f1){
    cout<<"Enter the second latter of your name.";
    cin>>f1;
}
int main(){
    
    //Reference variables must be initilize during theirs declarations.
    //b=ch is wrong.
    char c;
    cout<<"enter the first character of your name."<<endl;
    cin>>c;
    display_fun(c);
    cout<<c;
    return 0;
}