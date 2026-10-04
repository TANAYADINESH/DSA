#include <iostream>
using namespace std;

class LinkedList
{
private:

    class Node
    {
    public:
        int data;
        Node* next;

        Node(int value)
        {
            data = value;
            next = NULL;
        }
    };

    Node* head;

public:

    LinkedList()
    {
        head = NULL;
    }

    // Insert at Beginning
    void insertBeginning(int value)
    {
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;

        cout << value << " inserted at beginning." << endl;
    }

    // Insert at End
    void insertEnd(int value)
    {
        Node* newNode = new Node(value);

        if(head == NULL)
        {
            head = newNode;
            cout << value << " inserted at end." << endl;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;

        cout << value << " inserted at end." << endl;
    }

    // Delete from Beginning
    void deleteBeginning()
    {
        if(head == NULL)
        {
            cout << "List is Empty." << endl;
            return;
        }

        Node* temp = head;

        cout << head->data << " deleted from beginning." << endl;

        head = head->next;

        delete temp;
    }

    // Display
    void display()
    {
        if(head == NULL)
        {
            cout << "List is Empty." << endl;
            return;
        }

        Node* temp = head;

        cout << "\nLinked List Elements:\n";

        while(temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    int ch;
    int value;

    do
    {
        cout << "\n------ LINKED LIST MENU ------" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Delete from Beginning" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Choice : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter Book ID : ";
                cin >> value;
                list.insertBeginning(value);
                break;

            case 2:
                cout << "Enter Book ID : ";
                cin >> value;
                list.insertEnd(value);
                break;

            case 3:
                list.deleteBeginning();
                break;

            case 4:
                list.display();
                break;

            case 5:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(ch != 5);

    return 0;
}