//
//  CharList.cpp
//  LinkedLists
//
//  Created by Gabriel Push on 4/16/24.
//

#include <iostream>
using namespace std;
class ListNode // class for list nodes
{
public:
    ListNode    *next;
    char         data;
};
// function to print the list of chars
void printList(ListNode *listHead) {
    ListNode *currentPtr = listHead; // create current pointer and init to the head
    cout << "Linked list with chars: " << endl;
    while (currentPtr != nullptr) {
        cout << currentPtr->data << " "; // print data
        currentPtr = currentPtr->next; // point to next list element
    }
    cout << endl;
}
int main() {
    // routine to create linked list of chars 'GOBLUE!'
    ListNode *head = new ListNode; // make head
    head->data = 'G'; // init data
    head->next = nullptr; // init next pointer to null
    
    ListNode *newNode1 = new ListNode; // make new node
    newNode1->data = 'O'; // init data
    newNode1->next = nullptr; // init next pointer to null
    head->next = newNode1; // point head to current node
    
    ListNode *newNode2 = new ListNode; // make new node
    newNode2->data = 'B'; // init data
    newNode2->next = nullptr; // init next pointer to null
    newNode1->next = newNode2; // point previous to current node
    
    ListNode *newNode3 = new ListNode; // make new node
    newNode3->data = 'L'; // init data
    newNode3->next = nullptr; // init next pointer to null
    newNode2->next = newNode3; // point previous to current node
    
    ListNode *newNode4 = new ListNode; // make new node
    newNode4->data = 'U'; // init data
    newNode4->next = nullptr; // init next pointer to null
    newNode3->next = newNode4; // point previous to current node
    
    ListNode *newNode5 = new ListNode; // make new node
    newNode5->data = 'E'; // init data
    newNode5->next = nullptr; // init next pointer to null
    newNode4->next = newNode5; // point previous to current node
    
    ListNode *tail = new ListNode; // make tail
    tail->data = '!'; // init data
    tail->next = nullptr; // init next pointer to null
    newNode5->next = tail; // point previous to tail node
    
    
    printList(head); // call print list func
    
    ListNode *currentPtr = head; // point to head
    while (currentPtr != head) {
        ListNode *toDelete = currentPtr; // assign toDelete to point to current node
        currentPtr = currentPtr->next; // move to next node stored in currentPtr
        delete toDelete; // delete the current node
    }
    
    return 0;
}

