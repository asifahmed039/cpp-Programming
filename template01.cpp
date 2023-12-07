#include<iostream>
using namespace std;
#include"template.cpp"
int main(){
    Pair<int> p1;
    p1.setx(20);
    p1.sety(50);
    cout<<p1.getx()<<" "<<p1.gety()<<endl;

    Pair<double> p2;
    Pair<char> p3;
    return 0;

}