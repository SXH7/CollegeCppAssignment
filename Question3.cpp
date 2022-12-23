#include<iostream>
using namespace std;

int main(){
	int num, counter = 1;
	
	cout << "Enter the number: ";
	cin >> num;
	cout << endl << "The factors of the number are : " << endl;
	
	while(counter <= num){
		if(!(num%counter)){
			cout << counter << ", ";
		}
		counter++;
	}
	
}
