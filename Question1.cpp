#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i = 2, counter = 0, sum = 1, temp;
	
	cout <<"Enter the value of N: ";
	cin >> n; 
	
	while(counter < n-1){
		if(i%2){
			temp = pow(i, n);
		}
		else{
			temp = -1*pow(i, n);
		}
		i++;
		counter++;
		sum = sum+temp;
	}
	
	cout << sum;

}
