#include <iostream>
using namespace std;
class Node
{
public:
    string Name;
    double Marks;
    bool Grace;
    Node *next;

    Node(string n, double m)
    {
        Name = n;
        Marks = m;
        Grace = false;
        next = NULL;
    }
};

void insertAtEnd(Node **head, string Name, double Marks)
{
    Node *nodeObj = new Node(Name, Marks);
    if (*head == NULL)
    {
        *head = nodeObj;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nodeObj;
    }
}

void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "No Student the list" << endl;
    }
    else
    {
        while (head != NULL)
        {
            cout << "Name: " << head->Name << endl;
            cout << "Marks: " << head->Marks << endl;
            if (head->Grace == true)
            {
                cout << head->Name << " " << " Passed with grace" << endl;
            }
            else
            {
                if (head->Marks < 30)
                {
                    cout << "Failed" << endl;
                }
                else
                {
                    cout << head->Name <<" " << "Passed" << endl;
                }
            }
            head = head->next;
        }

        cout << "All students are listed above" << endl;
    }
}

void applyUniPolicy(Node *head)
{
    while (head != NULL)
    {
        if (head->Marks < 30)
        {
            head->Marks = 30;
            head->Grace = true;
        }
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    int choice, M;
    string N;
    while (true)
    {
        cout << "\nMenu\n";
        cout << "1. Insert the name of students as well as marks" << endl;
        cout << "2. Display student info" << endl;
        cout << "3. Apply University Policy" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        cout <<"Enter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the name of the student: ";
            cin >> N;
            cout << "Enter the marks: ";
            cin >> M;
            insertAtEnd(&head, N, M);
            break;

        case 2:
            printList(head);
            break;

        case 3:
            applyUniPolicy(head);
            break;
        case 4:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}