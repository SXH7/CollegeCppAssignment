#include <iostream>
using namespace std;

template<class V>
class TwoDim{
    public:
    V x, y;
    TwoDim(){
        x = 10;
        y = 20;
    }
    TwoDim(V a, V b){
        x = a;
        y = b;
    }
    
    void print(){
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }
};

template<class V>
class ThreeDim: public TwoDim<V>{
    public:
    V x, y, z;
    ThreeDim(){
        x = 10;
        y = 20; 
        z = 30;
    }
    ThreeDim(V a, V b, V c){
        x = a;
        y = b;
        z = c;
    }
    void print(){
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
    }
    
};

int main() {
    TwoDim<int> *p = new ThreeDim<int>(1,3, 5);
    p -> print();
}
