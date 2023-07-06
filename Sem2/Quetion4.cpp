#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

class DLL{
    Node*head;
    Node*tail;
    public:
    DLL(){
        head = NULL;
        tail = NULL;
    }

    void display();
    void addtohead(int x);
    void addtotail(int x);
    void deletefromhead();
    void deletefromtail();
    void insert(int x, int pos);
    void reverse();
    int count();
    void deletedata(int x);

};

void DLL::display(){
    if(!head){
        cout << "Empty List";
    }
    else{
        Node*p = head;
        while(p!=0){
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
}

int DLL::count(){
    int count = 0;
    if(!head){
        cout << "Empty List";
    }
    else{
        Node*p = head;
        while(p!=0){
            count++;
            p = p->next;
        }
    }
    return count;
}

void DLL::addtohead(int x){
    Node*p = new Node(x);
    if(!head){
        head = p;
        tail = p;
    }
    else{
        head->prev = p;
        p->next = head;
        head = p;
    }
}

void DLL::addtotail(int x){
    Node*p = new Node(x);
    if(!tail){
        tail = p;
        head = p;
    }
    else{
        tail->next=  p;
        p->prev = tail;
        tail = p;
    }
}

void DLL::deletefromhead(){
    if(!head){
        cout << "List Empty";
    }
    else{
        Node*p = head;
        head->next->prev = 0;
        head = head->next;
        delete p;
    }
}

void DLL::deletefromtail(){
    if(!tail){
        cout << "List Empty";
    }
    else{
        Node*p = tail;
        tail->prev->next = 0;
        tail = tail->prev;
        delete p;
    }
}

void DLL::insert(int x, int pos){
    if(pos == 1){
        addtohead(x);
    }
    else{
        int count = 1;
        Node*in = new Node(x);
        Node*p = head;
        Node*pr = 0;
        while(count!=pos){
            pr = p;
            p = p->next;
            count++;
        }
        pr->next = in;
        in->prev = pr;
        in->next = p;
        p->prev = in;
    }
    
}

void DLL::deletedata(int x){
    Node*p = head;
    Node*pr = 0;
    bool found = false;
    while(p!=0){
        if(p->data == x){
            found = true;
            break;
        }
            pr = p;
            p = p->next;
    }
    if(found){
        pr->next = p->next;
        p->next->prev = pr;
    }
    else{
        cout << "Entry not in list";
    }
}

int main(){
    DLL list;
    list.addtohead(10);
    list.addtotail(50);
    list.addtohead(22);
    list.display();
    list.insert(2,3);
    list.display();
    list.deletedata(2);
    list.display();
}
