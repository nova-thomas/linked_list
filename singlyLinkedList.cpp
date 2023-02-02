/*
* Nova Thomas
* 2/2/2023
* Singly Linked List API
*/

#include <iostream>

// Struct for a node in the list, holding the data and the address of next node
struct node {
    int data;
    node* next;
};

class linkedList {
private:
    // Pointer to the head and tail of the list
    node* head;
    node* tail;

public:
    // Constructor
    linkedList() {
        head = NULL;
        tail = NULL;
    }

    // Add a node to the front
    void pushFront(int key) {
        node* temp = new node;
        temp->data = key;
        if (head == NULL && tail == NULL) {
            head = temp;
            tail = temp;
            temp->next = NULL;
        }
        else {
            temp->next = head;
            head = temp;
        }
    }

    // Return the front item
    int topFront() {
        return head->data;
    }

    // Remove the front item
    void popFront() {
        if (head == NULL && tail == NULL) {
            return;
        }
        node* temp = new node;
        temp = head;
        head = head->next;
        delete temp;
    }

    // Add a node to the back
    void pushBack(int key) {
        node* temp = new node;
        temp->data = key;
        temp->next = NULL;
        if (head == NULL && tail == NULL) {
            head = temp;
            tail = temp;
        }
        else {

            tail->next = temp;
            tail = temp;
        }
    }

    // Return the back item
    int topBack() {
        return tail->data;
    }

    // Remove the back item
    void popBack() {
        if (head == NULL) {
            return;
        }
        if (head->next == NULL) {
            delete head;
            return;
        }

        node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete temp->next;
        tail = temp;
    }

    // Searching the list to see if a given key is in the list
    bool findKey(int key) {
        // Iterate through until finding the position it's looking for
        node* findKey = head;
        // Looping, looking for a given 
        node* temp = head;
        int i = 0;
        while (i < this->size()) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
            i++;
        }
        return false;
    }

    // Checking to see if the list is empty
    bool empty() {
        if (head == NULL && tail == NULL) {
            return true;
        }
        else {
            return false;
        }
    }

    // Adds a key before a given node
    void addBefore(int pos, int key) {
        node* newNode = new node;
        newNode->data = key;
        newNode->next = NULL;
        if (pos < 1) {
            return;
        }
        else if (pos == 1) {
            newNode->next = head;
            head = newNode;
        }
        else {
            node* temp = head;
            for (int i = 0; i < pos - 1; i++) {
                if (temp != NULL) {
                    temp = temp->next;
                }
            }
            if (temp != NULL) {
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }

    // Adds a key after a given node
    void addAfter(int pos, int key) {
        if (head == NULL && tail == NULL) {
            return;
        }
        node* temp = head;
        int i = 0;
        while (i != pos) {
            temp = temp->next;
            i++;
        }
        node* after = new node;
        after->data = key;
        after->next = temp->next;
        temp->next = after;
    }

    // Prints all of the elements of the list
    void displayAll() {
        node* temp = head;
        while (temp != tail) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << temp->data << " ";
        std::cout << std::endl;
    }

    // Returns the number of elements in the list
    int size() {
        int count = 0;
        node* temp = new node;
        temp = head;
        // Loop to go through list starting at head
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Overwrites the data in a node with a given key
    void replaceKey(int pos, int key) {
        if (head == NULL && tail == NULL) {
            return;
        }

        if (pos < this->size()) {
            node* temp = head;
            int i = 0;
            while (i < pos - 1) {
                temp = temp->next;
                i++;
            }
            temp->next->data = key;
        }
    }
};