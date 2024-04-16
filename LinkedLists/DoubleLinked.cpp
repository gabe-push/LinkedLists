//
//  DoubleLinked.cpp
//  LinkedLists
//
//  Created by Gabriel Push on 4/16/24.
//

#include <iostream>
using namespace std;


class Node2 {
public:
    Node2 *next;
    Node2 *prev;
    char data;
};


void traverseHead2Tail(Node2 *head) {
    Node2 *currentPtr = head;
    cout << "Doubly-Linked List Head To Tail: " << endl;
    while (currentPtr != nullptr) {
        cout << currentPtr->data << " ";
        currentPtr = currentPtr->next;
    }
    cout << endl << endl;
}


void traverseTail2Head(Node2 *tail) {
    Node2 *currentPtr = tail;
    cout << "Doubly-Linked List Tail To Head: " << endl;
    while (currentPtr != nullptr) {
        cout << currentPtr->data << " ";
        currentPtr = currentPtr->prev;
    }
    cout << endl << endl;
}



int main() {
    // routine to create doubly-linked list of chars 'GOBLUE!'
    Node2 *head = new Node2; // make head
    head->data = 'G'; // init data
    head->next = nullptr; // init next pointer to null
    head->prev = nullptr; // init previous to null
    
    Node2 *newNode1 = new Node2; // make new node
    newNode1->data = 'O'; // init data
    newNode1->next = nullptr; // init next pointer to null
    newNode1->prev = head; // point current to previous node
    head->next = newNode1; // point previous to current node
    
    Node2 *newNode2 = new Node2; // make new node
    newNode2->data = 'B'; // init data
    newNode2->next = nullptr; // init next pointer to null
    newNode2->prev = newNode1; // point current to previous node
    newNode1->next = newNode2; // point previous to current node
    
    Node2 *newNode3 = new Node2; // make new node
    newNode3->data = 'L'; // init data
    newNode3->next = nullptr; // init next pointer to null
    newNode3->prev = newNode2; // point current to previous node
    newNode2->next = newNode3; // point previous to current node
    
    Node2 *newNode4 = new Node2; // make new node
    newNode4->data = 'U'; // init data
    newNode4->next = nullptr; // init next pointer to null
    newNode4->prev = newNode3; // point current to previous node
    newNode3->next = newNode4; // point previous to current node
    
    Node2 *newNode5 = new Node2; // make new node
    newNode5->data = 'E'; // init data
    newNode5->next = nullptr; // init next pointer to null
    newNode5->prev = newNode4; // point current to previous node
    newNode4->next = newNode5; // point previous to current node
    
    Node2 *tail = new Node2; // make tail
    tail->data = '!'; // init data
    tail->next = nullptr; // init next pointer to null
    tail->prev = newNode5; // point tail to previous node
    newNode5->next = tail; // point previous to tail node
    
    
    traverseHead2Tail(head); // call print head to tail
    traverseTail2Head(tail); // call print tail to head (reverse order)
    
    
    Node2 *currentPtr = head; // make currentPointer init to head for deletion
    Node2 *nextPtr; // make a next pointer for deletion
    while (currentPtr != nullptr) {
        nextPtr = currentPtr->next; // store the next node
        delete currentPtr; // free current node
        currentPtr = nextPtr; // move to the next node
    }
    
    return 0;
}

