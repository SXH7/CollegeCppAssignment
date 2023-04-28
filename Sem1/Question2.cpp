#include<iostream>

using namespace std;

int main(){
	int n, counter1 = 0, counter2 = 0;
	char letter = 65;
	cout << "Enter the value of N: ";
	cin >> n;
	cout << endl;
	
	while(counter1 < n){
		counter2 = 0;
		letter = 65+counter1;
		while(counter2 < n){
			if(letter < 65){
				break;
			}
			cout << letter;
			counter2++;
			letter--;
		}
		counter1++;
		cout << endl;
	}
		
}
