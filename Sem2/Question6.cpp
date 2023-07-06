#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        data = d;
        next = 0;
    }
};

class SLL{
    Node*head;
    
    public:
    SLL(){
        head = 0;
    }
    
    void addtohead(int x);
    int count();
    void deletefromhead();
    bool isempty();
    int returntop();
};

int SLL::returntop(){
    return head->data;
}

bool SLL::isempty(){
    if(head==0){
        return true;
    }
    else{
        return false;
    }
}

void SLL::addtohead(int x){
    Node*p = new Node(x);
    if(head==0){
        head = p;
    }
    else{
        p->next = head;
        head = p;
    }
}

int SLL::count(){
    int count = 0;
    Node*p = head;
    while(p!=0){
        count++;
        p = p->next;
    }
    return count;
}

void SLL::deletefromhead(){
    if(head==0){
        cout << "LL Empty";
    }
    else{
        Node*p = head;
        head = p->next;
        delete p;
    }
}

class Stack{
    
    private:
    SLL L;
    int size;

    public:
    Stack(int x){
        size = x;
    }

    void push(int x);
    int pop();
    int peek();
};

void Stack::push(int x){
    if(L.count()==size){
        cout << "Stack Overflow";
    }
    L.addtohead(x);
}

int Stack::pop(){
    if(L.isempty()){
        cout << "Empty Stack" << endl;
        return -1;
    }
    else{
        int num = L.returntop();
        L.deletefromhead();
        return num;
    }
}

int Stack::peek(){
    if(L.isempty()){
        cout << "Empty Stack" << endl;
        return -1;
    }
    else{
        return L.returntop();
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
                    cout << num << endl;
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
                    cout << num << endl;
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
