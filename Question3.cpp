#include<iostream>
using namespace std;

void factors(int number = 10){
	int counter = 1;
	while(counter <= number){
		if(!(number%counter)){
			cout << counter << ", ";
		}
		counter++;
	}
}

int main(){
	int num, counter = 1;
	
	cout << "Enter the number: ";
	cin >> num;
	
	if(!num){
		cout << "Number is zero.";
	}
	else{
		cout << endl << "The factors of the number are : " << endl;
		factors(num);
	}
}
