//
//  Queue.cc
//  
//
//  Created by Angus Leung on 2015-03-07.
//
//


#include Queue.h


//Default constructor
Queue::Queue() : head(0){
    
    
}

//Copy constructor
Queue::Queue(Queue &aQueue){
    
}

//Destructor
Queue::~Queue(){
    
}

void Queue::push(Pirate* aPirate){
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
    
}

Pirate* Queue::front(){
    
}

bool Queue::empty(){
    
}

bool Queue::find(pirate *aPirate){
    
}

void Queue::remove(pirate *aPirate){
    
}