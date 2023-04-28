#include<iostream>
using namespace std;

class TwoDim{
    public:
    int x, y;
    TwoDim(){
        x = 0;
        y = 0;
    }
    TwoDim(int a, int b){
        x = a;
        y = b;
    }
    
    void print(){
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }
};

class ThreeDim: public TwoDim{
    public:
    int z;
    ThreeDim(){
        x = 0;
        y = 0; 
        z = 0;
    }
    ThreeDim(int a, int b, int c){
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

int main(){
    ThreeDim sample(1, 2, 3);
    sample.print();
}
