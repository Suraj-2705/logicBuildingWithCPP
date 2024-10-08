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
int main(){
    Node * head = NULL;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    
    printList(head);
    return 0;

}

