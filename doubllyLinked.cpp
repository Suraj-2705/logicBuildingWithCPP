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
int main(){
    Node *head = NULL;
    int value, n;
    cout << "Enter the number of element you want to insert in linkedlist: ";
    cin >> n;
    cout << "Enter the value: ";
    for(int i = 0; i < n; i++){
        cin>>value;
        insertAtBeginning(&head, value);
    }

    printList(head);
}