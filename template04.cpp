#include<iostream>
using namespace std;

template <typename T,typename V>

class Pair
{
private:
    T x;                        //triplets using pair concept.
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
    Pair<Pair<int,int>,int> p1;
    p1.sety(203);
    Pair<int,int>p2;
    p2.setx(204);
    p2.sety(206);

    p1.setx(p2);
     cout<<p1.getx().getx()<<" "<<p1.getx().gety()<<" "<<p1.gety()<<endl;
     cout<<p1.getx().getx()+p1.getx().gety()+p1.gety()<<endl;




    /*   p1.setx(20);
     p1.sety(30.05);
     cout<<p1.getx()+p1.gety();
    */
   
    return 0;

}