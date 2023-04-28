#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int i = 0;
    while(i<n){
        int j = i;
        int min = i;
        while(j<n){
            if(arr[j]<arr[min]){
                min = j;
            }
            j++;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        i++;
    }
    
    for(int x = 0; x<n; x++){
        cout << arr[x] << endl;
    }
}

int main() {
    int a[] = {4, 3, 65, 3, 6, 4356};
    selectionSort(a, 6);
}
