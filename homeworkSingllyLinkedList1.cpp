#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) {  
        data = value;
        next = nullptr;
    }
};


void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}


void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int countElements(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}


bool linearSearch(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = nullptr; 
    int choice, value, n;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at beginning of the singly linked list\n";
        cout << "2. Print the singly linked list\n";
        cout << "3. Find the number of elements in the singly linked list\n";
        cout << "4. Perform linear search operation in singly linked list\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number of element to br inserted: ";
                cin >> n;
                cout << "Enter the value to insert: ";
                for(int i = 0; i < n; i++){
                cin >> value;
                insertAtBeginning(head, value);
                }
                break;
            case 2:
                printList(head);
                break;
            case 3:
                cout << "Number of elements: " << countElements(head) << endl;
                break;
            case 4:
                cout << "Enter the value to search for: ";
                cin >> value;
                if (linearSearch(head, value))
                    cout << value << " found in the list." << endl;
                else
                    cout << value << " not found in the list." << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
