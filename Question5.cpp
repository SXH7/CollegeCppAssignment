#include<iostream>
using namespace std;

int len(char* str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }

    return len;
}

void caps(char str[]){
    int x = 0;
    bool allcaps = true;
    while(str[x] != '\0'){
        if(!(str[0] > 64 && str[x+1 < 91])){
            allcaps = false;
        }
        if(str[x]==' '){
            if(!(str[x+1] > 64 && str[x+1] < 91)){
                allcaps = false;
            }
        }
        x++;
    }
    if(allcaps){
        cout << "First letter of every word is caps.";
    }
    else{
        cout << "First word of every word is not caps.";
    }
}

void reverse(char str[]){
    int x = 0;
    int length = len(str);
    while(x < length/2){
        char temp;
        temp = str[x];
        str[x] = str[length-x-1];
        str[length-x-1] = temp;
        x++;
    }
    cout << str;
}

void address(char str[]){
    int x = 0;
    while(str[x]!='\0'){
        cout << (void*) &str[x] << endl;
        x++;
    }
}

int main(){

    cout << "Enter string: ";
    char str[50];
    cin.getline(str,50);

    cout << "What operation would you like to perform on the string?" << endl;
    cout << "Enter '1' for calculating length of string through pointers." << endl;
    cout << "Enter '2' for checking if first character of every word is capital." << endl;
    cout << "Enter '3' for reversing string." << endl;
    cout << "Enter '4' to display address of every character in a string" << endl;
    int x;
    cin >> x;

    switch(x){
        case 1:{
            int length = len(str);
            cout << "The length of string is: " << length;
        }
        case 2:
            caps(str);
        case 3:
            reverse(str);
        case 4:
            address(str);
    }
}
