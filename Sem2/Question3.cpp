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
    void reverse();
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
        cout << "Empty" << endl;
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

void SLL::reverse(){
    if(head == 0){
        cout << "LL Empty";
    }
    else if(head->next == 0){
        cout << "Already Reversed";
    }
    else{
        Node*prev = 0;
        Node*p = head;
        Node*nx = head->next;
        while(p!=0){
            p->next = prev;
            prev = p;
            p = nx;
            if(nx!=0){
                nx = nx->next;
            }
        }
        head = prev;
    }
    display();
}

int menu(){
    cout << "Enter the function you would like to use:" << endl;
    cout << "1. Add to head" << endl;
    cout << "2. Delete from head" << endl;
    cout << "3. Insert at position" << endl;
    cout << "4. Delete data" << endl;
    cout << "5. Display List" << endl;
    cout << "6. Reverse List" << endl;
    cout << "7. End program" << endl;
    int choice;
    cin >> choice;
    return choice;
}

int main() {
    SLL list;
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
                run = false;
                break;
            }
        }
    }
    
}
