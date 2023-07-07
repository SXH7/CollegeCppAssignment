#include<iostream>

using namespace std;

class Queue{
    private:
    int arr[100];
    int front, rear;
    int size;
    public:
    Queue(int x){
        size = x;
        front = -1;
        rear = 0;
    }
    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x){
    if(rear==size){
        cout << "Queue Full" << endl;
    }
    else if(front==-1){
        arr[rear++] = x;
        front+=1;
    }
    else{
        arr[rear++] = x;
    }
}

int Queue::dequeue(){
    if(front==rear || front==-1){
        cout << "Queue Empty" << endl;
    }
    else{
        int num = arr[front];
        int x = front;
        while(x<rear){
            arr[x] = arr[x+1];
            x++;
        }
        rear--;
        return num;
    }
}

void Queue::display(){
    cout << endl << "Front:" << front << " Rear:" << rear << endl;
    if(front==rear || front==-1){
        cout << "Queue Empty";
    }
    else{
        int x = front;
        while(x<rear){
            cout << arr[x] << " ";
            x++;
        }
        cout << endl;
    }
}

int menu(){
    cout << "Enter the function you would like to use:" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Display" << endl;
    cout << "4. Exit" << endl;

    int choice;
    cin >> choice;
    return choice;
}

int main(){
    Queue q(5);
    bool run = true;
    while(run){
        int choice = menu();
        switch(choice){
            case 1:{
                cout << "Enter element to be enqueued" << endl;
                int x;
                cin >> x;
                q.enqueue(x);
                break;
            }
            case 2:{
                q.dequeue();
                break;
            }
            case 3:{
                q.display();
                break;
            }
            case 4:{
                run = false;
                break;
            }
        }
    }
    
}
