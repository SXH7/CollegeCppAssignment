#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int x=0; x<n;x++){
        cout << arr[x] << endl;
    }    
}

int main() {
    int a[] = {4, 3, 65, 3, 6, 4356};
    bubbleSort(a, 6);
}
