#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char**argv){
	int n, i = 2, counter = 0, sum = 1, temp;
	
	if(argc==1){
		cout << "No arguements passed." << endl;
		cout <<"Enter the value of N: ";
		cin >> n; 
	}
	else{
		n = atoi(argv[1]);
	}
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
	getchar();
}
