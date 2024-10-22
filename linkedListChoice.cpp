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
void insertAtBeg(Node **head, int value){
    Node *nodeObj = new Node(value);
    nodeObj->next = *head;
    *head = nodeObj;
}

void deleteFromBeginning(Node **head){
    if(*head == NULL){
        cout << "No element to be deleted";
    }else{
        Node *temp = *head;
        *head = temp->next;
    }
}

void deleteFromLast(Node **head)
{
    if(*head == NULL)
    {
        cout << "No element to be deleted";
        return;
    }

    Node *temp = *head;
    if(temp->next == NULL)
    {
        delete(temp);
        *head = NULL;
        return;
    }

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete(temp->next);
    temp->next = NULL;
}
void deleteKthElement(Node **head, int k)
{
    if(k < 1)
    {
        cout << "The position can't be less than 1";
        return;
    }

    if(*head == NULL)
    {
        cout << "No elements to delete" << endl;
    }

    Node *temp = *head;
    for(int i = 1; i<k-1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout << "The element at given position does not exist";
        return;
    }

    Node *x = temp->next;
    temp->next = x->next;
    delete(x);
}
void insertAtKthPosition(Node **head, int k, int value)
{
    if(k < 1)
    {
        cout << "The position can't be less than 1";
        return;
    }

    if(*head == NULL)
    {
        cout << "Element can't be inserted" << endl;
    }

    Node *temp = *head;
    for(int i = 1; i<k-1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout << "The specified position does not exist";
        return;
    }

    Node *nodeObj1 = new Node(value);
    nodeObj1->next = temp->next;
    temp->next = nodeObj1;
}
int main(){
    Node * head = NULL;
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
                cout << "Enter the number of element to insert: ";
                cin >> n;
                cout << "Enter value to insert at the beginning: ";
                for(int i = 0; i < n; ++i){
                    cin >> value;
                    insertAtBeg(&head, value);
                }
                break;
            case 2:
                cout << "Enter the number of element to insert: ";
                cin >> n;
                cout << "Enter value to insert at the end: ";
                for(int i = 0; i<n; ++i){
                    cin >> value;
                    insertAtEnd(&head, value);
                }
                break;
            case 3:
                printList(head);
                break;
            case 4:
                cout << "Enter the number of elements to delete: ";
                cin >> n;
                cout << "Enter the value to be deleted: ";
                for(int i = 0; i < n; i++)
                {
                    cin >> value;
                    deleteFromBeginning(&head);
                }
                break;

            case 5:
                cout << "Enter the number of elements to delete: ";
                cin >> n;
                for(int i = 0; i < n; i++)
                {
                    deleteFromLast(&head);
                }
                break;
            case 6:
                int k;
                cout << "Enter the position from which you want to delete an element: ";
                cin >> k;
                deleteKthElement(&head, k);
                break;
            case 7:
                int f;
                cout << "Enter the position where you want to insert an element: ";
                cin >> f;
                cout << "Enter the value you want to insert: ";
                cin >> value;
                insertAtKthPosition(&head, f, value);
                break;


            case 8:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;

}