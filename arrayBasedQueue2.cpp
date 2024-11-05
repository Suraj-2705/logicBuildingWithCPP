#include<iostream>
#define size 5
using namespace std;
int a[size];
int front = -1;
int rear = -1;
void enqueue(int val){
    if(rear == size-1){
        cout << "Overflow"<<endl;
        return;
    }

    if(front == -1){
        front++;
    }

    rear++;
    a[rear] = val;
}

void dequeue(){
    if(front == -1){
        cout << "Underflow"<<endl;
        return;
    }

    int result = a[front];
    if(front == rear){
        front = rear = -1;
        cout << "Element deleted" << result<<endl;
        return;
    }

    front++;
    cout << "Element deleted is " << result << endl;
}
int main(){
    enqueue(72);
    enqueue(36);
    enqueue(20);
    enqueue(15);
    dequeue();
    enqueue(19);
    enqueue(45);
    dequeue();
    enqueue(45);

return 0;

}