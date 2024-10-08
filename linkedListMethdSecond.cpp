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
void printList(Node * head)
    {
        if(head == NULL)
        {
            cout << "No element int the list" << endl;
        }else{
            while(head!=NULL)
            {
                cout << head->data << "->";
                head = head->next;
                
            }
            cout << "NULL";
        }
        
    }    
void insertAtEnd(Node **head, int value){
    Node *nodeObj = new Node(value);
    if(*head == NULL){
        *head = nodeObj;
    }else{
        Node *temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nodeObj;
    }
}
int main(){
    Node * head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    
    printList(head);
    return 0;

}

