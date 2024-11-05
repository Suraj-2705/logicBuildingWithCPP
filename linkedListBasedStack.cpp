#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void push(Node **top, int value){
    Node *nodeObj = new Node(value);
    nodeObj->next = *top;
    *top = nodeObj;
}

void pop(Node **top){
    if(*top == NULL){
        cout << "No element to be deleted";
    }else{
        Node *temp = *top;
        *top = temp->next;
    }
}


int main(){
    Node * top = NULL;
    int choice, value, n;

    while(true){
        cout << "\nMenu\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Exit\n";
}
}