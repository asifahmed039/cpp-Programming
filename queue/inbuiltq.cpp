#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<char> s;
    s.push('a');
    s.push('g');
    s.push('e');
     
    s.pop();
    cout<<s.front();
    cout<<s.size();
    return 0;
}