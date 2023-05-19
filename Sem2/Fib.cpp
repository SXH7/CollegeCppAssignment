// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fibrec(int x){
    if(x<=1){
        return x;
    }
    else{
        return fibrec(x-1)+fibrec(x-2);
    }
}

int fibiter(int x){
    int fib = 0;
    int count = 0;
    while(count<x){
        fib+=1;
        count++;
    }
}

int main() {
    cout<<fibrec(6)<< endl;
    cout <<fibiter(5);
}
