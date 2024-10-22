#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};
void insertAtBeginning(Node **head, int value){
    Node *nodeObj = new Node(value);
    if(*head == NULL){
        *head = nodeObj;
        return;
        }
    Node *temp = *head;
    nodeObj->next = *head;
    temp->prev = nodeObj;
    *head = nodeObj;
}

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

void insertAtEnding(Node **head, int value){
    Node *nodeObj = new Node(value);

    if(*head == NULL){
        *head = nodeObj;
        return;
    }else{
        Node *temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = nodeObj;
        nodeObj->prev = temp;
    }
}

void deleteFromBeginning(Node **head){
    if(*head == NULL){
        cout << "No element to be deleted";
        return;
    }

    Node *temp = *head;
    if(temp->next == NULL){
        *head = NULL;
        delete(temp);
    }else{
        *head = temp->next;
        temp->next->prev = NULL;
        delete(temp);
    }
}

void deleteFromEnd(Node **head){
    if(*head == NULL){
        cout << "No element to be deleted";
        return;
    }

    Node *temp = *head;
    if(temp->next == NULL){
        *head = NULL;
        delete(temp);
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete(temp);
}

int main(){
    Node *head = NULL;
    int choice, value, n;
    while(true){
        cout << "\nMenu\n";
        cout << "1. Insert element at the beginning of linked list\n";
        cout << "2. Insert element at the end of linked list\n";
        cout << "3. Display linked list\n";
        cout << "4. Delete the element from the beginning\n";
        cout << "5. Delete the element from the last\n";
        cout << "6. Delete the element from the kth position\n";
        cout << "7. Insert at kth position\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

    switch(choice){
        case 1:
            cout << "Enter the number of element you want to insert in linkedlist: ";
            cin >> n;
            cout << "Enter the value: ";
            for(int i = 0; i < n; i++){
                cin>>value;
                insertAtBeginning(&head, value);
            }
            cout << endl;
            break;
        
        case 2:
            cout << "Enter the number of element you want to insert in linkedlist: ";
            cin >> n;
            cout << "Enter the value: ";
            for(int i = 0; i < n; i++){
                cin >> value;
                insertAtEnding(&head, value);
            }
            cout << endl;
            break;

        case 3:
            printList(head);
            cout << endl;
            break;

        case 4:
            cout << "Enter the number of elements to delete: ";
            cin >> n;
            cout << "Enter the values you want to delete: ";
            for(int i = 0; i < n; i++){
                cin >> value;
                deleteFromBeginning(&head);
            }
            cout << endl;
            break;

        case 5:
            cout << "Enter the number of elements you want to delete from end: ";
            cin >> n;
            for(int i = 0; i < n; i++){
                deleteFromEnd(&head);
            }
            cout << endl;
            break;
        case 8:

            cout << "Exiting program.\n";
            cout << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
    }

}
     return 0;
}