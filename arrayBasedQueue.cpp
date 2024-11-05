#include<iostream>
using namespace std;

#define SIZE 5

int a[SIZE];
int front = -1;
int rear = -1;

void enqueue(int val) {
    if (front == -1) {
        front++;
    }
    if (rear == SIZE - 1) {
        cout << "Overflow" << endl;
        return;
    }
    if(front ==0 && rear ==SIZE-1)
    {
        cout<<"overflow";
        return;
    }
    if(front!=0 && rear==SIZE-1)
    {
        for(int i=front;i<=rear;i++)
        {
            a[i-front]=a[i];
        }
        rear=rear-front;
        front=0;
    }
    a[++rear] = val;
    cout << "Inserted: " << val << endl;
}

int  dequeue(){
    if(front==-1){cout<<"Underflow"<<endl;return -1;}
    if(front==rear){
        int result = a[front];
        front = rear = -1;
        return result;
    }
    int result = a[front];
    front++;
    return result;
}


int main() {
    int choice, value;

    do {
        cout << "------MENU------" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if (value != -1) {
                    cout << "Dequeued: " << value << endl;
                }
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}