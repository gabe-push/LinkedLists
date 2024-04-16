//
//  IntList.cpp
//  LinkedLists
//
//  Created by Gabriel Push on 4/16/24.
//

#include <iostream>
using namespace std;


// class for nodes
class ListNode
{
public:
    ListNode    *next;
    int         data;
};

// function to find size of linked list
// takes head pointer of ListNode
int listSize(ListNode *head) {
    int numElements = 0; // initialize size
    ListNode *currentPtr = head; // initialize current pointer to the head
    while (currentPtr != nullptr) { // loop until current pointer is null
        numElements++; // increment size
        currentPtr = currentPtr->next; // point to next element in linked list
    }
    return numElements; // return size
}

// function to find sum of linked list
// takes head pointer of ListNode
int listSum(ListNode *head) {
    int sum = 0; // initialize sum
    ListNode *currentPtr = head; // initialize current pointer to the head
    while (currentPtr != nullptr) { // loop until current pointer is null
        sum += currentPtr->data; // increment sum by current pointer data
        currentPtr = currentPtr->next; // point to next element in linked list
    }
    return sum; // return the sum
}


int main() {
    // routine to allocate nodes and create linked list
    ListNode *head = new ListNode; // make head
    head->data = 33; // first value
    head->next = nullptr; // initialize next to null
    
    ListNode *newNode1 = new ListNode; // make second element
    newNode1->data = 45; // second value
    newNode1->next = nullptr; // initialize next to null
    head->next = newNode1; // head now points to newNode1
    
    ListNode *newNode2 = new ListNode; // make third element
    newNode2->data = 58; // third value
    newNode2->next = nullptr; // initialize next to null
    newNode1->next = newNode2; // newNode1 now points to newNode2
    
    ListNode *tail = new ListNode; // make tail
    tail->data = 81; // tail value
    tail->next = nullptr; // initialize next to null
    newNode2->next = tail; // newNode2 now points to tail
    
    ListNode *currentPtr = head; // initialize current pointer to head
    cout << "Linked List: " << endl;
    while (currentPtr != nullptr) { // print linked list elements
        cout << currentPtr->data << endl;
        currentPtr = currentPtr->next; // move current pointer to next element in linked list
    }
    
    cout << "Size of list: " << listSize(head) << endl; // call listSize and print
    cout << "Sum of list: " << listSum(head) << endl; // call listSum and print
    
    ListNode *toDelete; // ListNode pointer to delete dynamically allocated memory
    while (head != nullptr) {
        toDelete = head; // point toDelete to head of list
        head = head->next; // move head to next node
        delete toDelete; // delete dynamically allocated memory
    }
    
    return 0;
}

