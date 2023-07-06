// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factrec(int x){
    if(x>1){
        return x*factrec(x-1);
    }
    else{
        return 1;
    }
}

int factiter(int x){
    int fact = 1;
    while(x>0){
        fact*=x;
        x-=1;
    }
    return fact;
}

int main() {
    cout<<factrec(4)<< endl;
    cout <<factiter(5);
}
