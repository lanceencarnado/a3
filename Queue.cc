//
//  Queue.cc
//  
//
//  Created by Angus Leung on 2015-03-07.
//
//


#include "Queue.h"


//Default constructor
Queue::Queue() : head(0){
    
    
}

//Copy constructor
Queue::Queue(Queue &origQueue){
	head = 0;
	Node *origCurrNode;
	
	origCurrNode = origQueue.head;
	
	while (origCurrNode != 0) {
		push(origCurrNode->data);
		origCurrNode = origCurrNode->next;
	}
}

//Destructor
Queue::~Queue(){
    
}

void Queue::push(Pirate* newPirate) {
    Node *newNode;
    Node *currNode, *prevNode;

    newNode = new Node;
    newNode->data = newPirate;
    newNode->prev = 0;
    newNode->next = 0;

    prevNode = 0;
    currNode = head;

    while (currNode != 0) {
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (prevNode == 0) {
        head = newNode;
    }
    else {
        prevNode->next = newNode;
        newNode->prev  = prevNode; 
    } 

    newNode->next = currNode;

    if (currNode != 0) {
        currNode->prev = newNode;
    }
}

void Queue::pop(){
    Node *currNode, *nextNode;
    
    currNode = head;
    
    //queue contains 2 or more elements
    if(currNode->next != 0){
        nextNode = currNode->next;
        
        delete curNode;
        nextNode->prev = 0;
        head = nextNode;
    }
    else{
        if(currNode == 0){
            //empty queue case
            return;
        }
        else{
            //only head
            delete currNode
        }
    }
   
    
}

Pirate* Queue::front() {
    return head->data;
}

bool Queue::empty() {
    if (head == 0)
        return true;
    else 
        return false;   
}

bool Queue::find(pirate *aPirate){
    
}

void Queue::remove(int pirateId) {
    Node *currNode, *prevNode;

    prevNode = 0;
    currNode = head;

    while (currNode != 0) {
        if (currNode->data->getId() == pirateId)
            break;
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (currNode == 0)
        return;

    if (prevNode == 0) {        /* first position */
        head = currNode->next;
        if (head != 0)          // if there is a head already
            head->prev = 0;     // set the head's prev to null
    }
    else {                      /* middle or end position */
        prevNode->next = currNode->next;
        if (currNode->next != 0)
            currNode->next->prev = prevNode;
    }

    delete currNode->data;
    delete currNode;
    
    // return C_OK;

}