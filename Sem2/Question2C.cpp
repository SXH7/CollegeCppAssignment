// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int powerrec(int x, int pow){
    if(pow==1){
        return x;
    }
    else{
        return x*powerrec(x, pow-1);
    }
}

int poweriter(int x, int pow){
    int final = 1;
    while(pow>0){
        final*=x;
        pow-=1;
    }
    return final;
}

int main() {
    cout << powerrec(5, 3) << endl;
    cout << poweriter(5, 3);
}
