// Online C++ compiler to run C++ program online
#include <iostream>
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
    void display();
    int count();
    void deletefromhead(int data);
};

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

void SLL::display(){
    if(head == 0){
        cout << "Empty";
    }
    else{
        Node*p = head;
        cout << "List is:" << endl;
        while(p!=0){
            cout << p->data << " ";
            p=p->next;
        }
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

int SLL::deletefromhead(){
    
}

int main() {
    SLL list;
    list.addtohead(5);
    list.addtohead(10);
    list.display();
    cout << "Number of elements: " << list.count();
}
