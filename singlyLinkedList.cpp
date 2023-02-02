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
    node* head, * tail;

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
        temp->next = head;
        head = temp;
    }

    // Return the front item
    int topFront() {
        return head->data;
    }

    // Remove the front item
    void popFront() {
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
        tail->next = temp;
        tail = temp;
    }

    // Return the back item
    int topBack() {
        return tail->data;
    }

    // Remove the back item
    void popBack() {
        if (head == NULL) {
            return NULL;
        }
        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
    }

    // Searching the list to see if a given key is in the list
    bool find(int key) {
        // Iterate through until finding the position it's looking for
        node* findKey = head;
        // Looping, looking for a given 
        do {
            if (findKey->data = key) {
                return true;
            }

        } while (findKey->data != key);
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
    void addBefore(node* givenNode, int key) {
        // Base case of front of list
        if (head == givenNode) {
            node* temp = new node;
            temp->data = key;
            temp->next = head;
        }
        else {
            // Iterate through until finding the position it's looking for
            node* beforeNew, findGiven = head;
            // Looping, looking for a given 
            for (findGiven, beforeNew; findGiven != givenNode; beforeNew = findGiven, findGiven = findGiven->next);

            node* temp = new node;
            temp->data = key;
            temp->next = beforeNew->next;
            beforeNew->next = temp;
        }
    }

    // Adds a key after a given node
    void addAfter(node* _node, int key) {
        node* temp = new node;
        temp->data = key;
        temp->next = _node->next;
        _node->next = temp;
    }

    // Prints all of the elements of the list
    void displayAll() {
        // Loop to go through list printing each value
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
        node* current = new node;
        node* previous = new node;
        current = head;

        if (pos < this->size)
        
    }
};
