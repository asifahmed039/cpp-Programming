
#include<iostream>
using namespace std;

template <typename T,typename V>

class Pair
{
private:
    T x;
    V y;

public:
    void setx(T x){
        this->x=x;
    }

    T getx(){
        return x;
    }

    void sety(V y){
        this->y=y;
    }

    V gety(){
        return y;
    }
};

int main(){
    Pair<int,double> p1;

    p1.setx(20);
    p1.sety(30.05);
    cout<<p1.getx()+p1.gety();
    return 0;

}