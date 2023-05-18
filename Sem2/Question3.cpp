// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int insertionSort(int arr[], int n){
    int temp;
    int len = n;
    for(int i=0; i<n; i++){
        temp = arr[i];
        int j;
        for(j=i-1; j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    for (int x=0; x<len;x++){
        cout << arr[x] << " ";
    }    
    cout << endl;

}

int main() {
    int a[] = {4, 3, 65, 3, 6, 4356};
    insertionSort(a, 6);
}
