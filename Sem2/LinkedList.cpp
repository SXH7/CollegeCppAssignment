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
    void deletefromhead();
    void deletedata(int data);
    void insert(int data, int position);
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
        cout << endl;
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

void SLL::deletedata(int x){
    if(head == 0){
        cout << "LL Empty";
    }
    else if(head->data == x){
        deletefromhead();
    }
    else{
        Node*p = head;
        Node*prev = head;
        while(p!=0){
            if(p->data == x){
                prev->next = p->next;
                delete p;
                break;
            }
            prev = p;
            p = p->next;
        }
    }
}

void SLL::insert(int x, int position){
    Node*p = new Node(x);
    Node*in = head;
    Node*prev = in;
    if(position==1){
        addtohead(x);
    }
    else{
        int count = 1;
        while(count!=position){
            prev = in;
            in = in->next;
            count++;
        }
        prev->next = p;
        p->next = in;
    }
}

int main() {
    SLL list;
    list.addtohead(6);
    list.addtohead(5);
    list.addtohead(10);
    list.addtohead(7);
    list.display();
    list.deletedata(5);
    list.display();
    list.insert(100, 2);
    list.display();
    
}
