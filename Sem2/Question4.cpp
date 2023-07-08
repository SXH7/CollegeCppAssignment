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

void DLL::reverse(){
    if(head->next==0){
        cout << "Already Reversed";
    }
    else{
        Node*pr = head;
        Node*p = pr->next;
        Node*nx = p->next;
        while(nx!=0){
            p->next = pr;
            pr = p;
            p = nx;
            nx = nx->next;
        }
        p->next = pr;
        head->next = 0;
        head = p;
    }
}

int menu(){
    cout << "Enter the function you would like to use:" << endl;
    cout << "1. Add to head" << endl;
    cout << "2. Delete from head" << endl;
    cout << "3. Insert at position" << endl;
    cout << "4. Delete data" << endl;
    cout << "5. Display List" << endl;
    cout << "6. Reverse List" << endl;
    cout << "7. Add to tail" << endl;
    cout << "8. Delete from tail" << endl;
    cout << "9. Count" << endl;
    cout << "10. Stop" << endl;
    int choice;
    cin >> choice;
    return choice;
}

int main() {
    DLL list;
    bool run = true;
    while(run){
        int choice = menu();
        switch(choice){
            case 1:{
                cout << "Enter the element you would like to add.";
                int x;
                cin >> x;
                list.addtohead(x);
                break;
            }
            case 2:{
                list.deletefromhead();
                break;
            }
            case 3:{
                cout << "Enter the element followed by position";
                int x, pos;
                cin >> x >> pos;
                list.insert(x, pos);
                break;
            }
            case 4:{
                cout << "Enter the number you would like to delete";
                int x;
                cin >> x;
                list.deletedata(x);
                break;
            }
            case 5:{
                list.display();
                break;
            }
            case 6:{
                list.reverse();
                break;
            }
            case 7:{
                cout << "Enter the number you would like to add.";
                int x;
                cin >> x;
                list.addtotail(x);
                break;
            }
            case 8:{
                list.deletefromtail();
                break;
            }
            case 9:{
                cout << list.count();
            }
            case 10:{
                run = false;
                break;
            }
        }
    }
    
}
