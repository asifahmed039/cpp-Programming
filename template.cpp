template <typename T>

class Pair
{
private:
    T x;
    T y;

public:
    void setx(T x){
        this->x=x;
    }

    T getx(){
        return x;
    }

    void sety(T y){
        this->y=y;
    }

    T gety(){
        return y;
    }
};



