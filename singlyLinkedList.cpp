#include <iostream>

// Node Template (struct)
    /*
    VARIABLES
    TYPE data; (Key in node)
    node *next;
    */

// List Template
    /*
    VARIABLES
    - Private:
      - node *head, *tail;
    CONSTRUCTORS
    - default constructor
    METHODS
    - create node (not available to user)
    - pushFront (add to front)
    - topFront (return front item)
    - popFront (remove front item)
    - pushBack (add to back)
    - topBack (return back item)
    - popBack (return back item)
    - Boolean find (is key in list)
    - Boolean empty (is it an empty list)
    - addBefore(Node, Key) (adds key before node)
    - addAfter(Node, Key) (adds key after node)
    - displayAll()
    - size() - returns the size of the list
    - replaceKey(Node, key) - overwrite the key given to a node
    
    notes: 
    if a function is trying to add to end or beginning of an empty list, make a case for making the first node
    populate list with push back and push front
    when you add a new node, always update the tail and head (head only for adding node to beginning)
    */
