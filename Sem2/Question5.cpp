#include<iostream>

using namespace std;

class Stack{
    private:
    int arr[100];
    int top;
    int size;

    public:
    Stack(int x){
        size = x;
        top = -1;
    }

    void push(int x);
    int pop();
    int peek();
};

void Stack::push(int x){
    if(top==size-1){
        cout << "Stack Overflow" << endl;
    }
    else{
        top+=1;
        arr[top] = x;
    }
}

int Stack::pop(){
    if(top==-1){
        cout << "Empty Stack" << endl;
        return -1;
    }
    else{
        return arr[top--];
    }
}

int Stack::peek(){
    if(top==-1){
        cout << "Empty Stack" << endl;
        return -1;
    }
    else{
        return arr[top];
    }
}

int menu(){
    cout << "Enter the function you would like to use:" << endl;
    cout << "1. Pop" << endl;
    cout << "2. Push" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Exit" << endl;

    int choice;
    cin >> choice;
    return choice;
}

int main(){
    Stack st(10);
    bool run = true;
    while(run){
        int choice = menu();
        switch(choice){
            case 1:{
                int num = st.pop();
                if(num!=-1){
                    cout << num;
                }
                break;
            }
            case 2:{
                cout << "Enter element to be pushed";
                int x;
                cin >> x;
                st.push(x);
                break;
            }
            case 3:{
                int num = st.peek();
                if(num!=-1){
                    cout << num;
                }
                break;
            }
            case 4:{
                run = false;
                break;
            }
        }
    }
    
}
