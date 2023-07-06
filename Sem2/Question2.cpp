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
    int first = 0;
    int second = 1;
    int temp ;
    while(x>1){
        temp = second;
        second = first+second;
        first = second;
        x--;
    }
    return second;
}

int main() {
    cout<<fibrec(6)<< endl;
    cout << fibiter(5);
}
