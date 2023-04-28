// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i = 0; i<n; i++){
        int element = i;
        for(int j = i; j>0;j--){
            if(arr[element]>arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[element];
                arr[element] = temp;
                
                cout << "ele: " << arr[element] << endl;
            }
        }
    }

    for(int x = 0; x<n; x++){
        cout << arr[x] << endl;
    }
}

int main() {
    int a[] = {4, 3, 65, 3, 6, 4356};
    insertionSort(a, 6);
}
