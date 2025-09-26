#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;  // Pointer to the first node
    Node* tail;  // Pointer to the last node

public:
    // Constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head == nullptr) {
            tail = newNode; // If the list is empty, tail should also point to newNode
        } else {
            head->prev = newNode;
        }
        head = newNode;
        cout << value << " inserted at the beginning.\n";
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        newNode->prev = tail;

        if (tail == nullptr) {
            head = newNode; // If the list is empty, head should also point to newNode
        } else {
            tail->next = newNode;
        }
        tail = newNode;
        cout << value << " inserted at the end.\n";
    }

    // Delete from the beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete.\n";
            return;
        }
        Node* temp = head;
        head = head->next;

        if (head == nullptr) { // If the list becomes empty
            tail = nullptr;
        } else {
            head->prev = nullptr;
        }

        cout << temp->data << " deleted from the beginning.\n";
        delete temp;
    }

    // Delete from the end
    void deleteFromEnd() {
        if (tail == nullptr) {
            cout << "List is empty. Cannot delete.\n";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;

        if (tail == nullptr) { // If the list becomes empty
            head = nullptr;
        } else {
            tail->next = nullptr;
        }

        cout << temp->data << " deleted from the end.\n";
        delete temp;
    }

    // Display the list in forward order
    void displayForward() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Doubly Linked List (Forward): ";
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Display the list in reverse order
    void displayReverse() {
        if (tail == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = tail;
        cout << "Doubly Linked List (Reverse): ";
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }
};

// Main function for user interaction
int main() {
    DoublyLinkedList list;
    int choice, value;

    while (true) {
        cout << "\nDoubly Linked List Operations:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete from Beginning\n";
        cout << "4. Delete from End\n";
        cout << "5. Display Forward\n";
        cout << "6. Display Reverse\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                list.deleteFromBeginning();
                break;
            case 4:
                list.deleteFromEnd();
                break;
            case 5:
                list.displayForward();
                break;
            case 6:
                list.displayReverse();
                break;
            case 7:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}


