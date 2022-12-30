#include<iostream>
#include<array>

using namespace std;

void minmaxavg(int arr[], int len){
    int min = 999999999, max = -999999999, sum = 0, i;
    for(i =0; i < len; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
        sum+=arr[i];
    }
    cout << "minimumm value is: " << min << endl;
    cout << "Max value is: " << max << endl;
    cout << "Average value is: " << sum/i << endl;
    
}

int linearsearch(int x, int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        if(arr[i] == x){
            cout << "The element is present at index " << i;
            return 0;
        }
    }
    cout << "Element is not present in the list.";
}

int binaysearch(int arr[], int x, int low, int high){
    if(low >= high){
        cout << "Element not present in list.";
        return 0;
    }
    else{
        int midpoint = (low+high)/2;
        if(arr[midpoint] == x){
            cout << "Element is present at: " << midpoint;
            return 0;
        }
        else if(x > arr[midpoint]){
            return binaysearch(arr, x, midpoint+1, high);
        }
        else if(x < arr[midpoint]){
            return binaysearch(arr, x, low, midpoint-1);
        }
    }
}

void printadd(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout << &arr[i] << endl;
    }
}

int main(){
    int choice;
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << len;
    
    cout << "What action do you want to do? Enter the index." << endl;
    cout << "1. Find min, max and average of every element in the list." << endl;
    cout << "2. Search element in list using linear search" << endl;
    cout << "3. Search element in list using binary search" << endl;
    cout << "4. display the address of every element of the array" << endl;
    
    cin >> choice;
    
    switch(choice){
        case 1:
            minmaxavg(arr, len);
            break;
        case 2:
            cout << "Enter the number you want to search for: ";
            cin >> x;
            linearsearch(x, arr, len);
        case 3:
            cout << "Enter the number you want to search for: ";
            cin >> x;
            binaysearch(arr, x, 0, len-1);
        case 4:
            printadd(arr, len);
        
    }
    
}
