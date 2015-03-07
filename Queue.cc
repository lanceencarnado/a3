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

Pirate* Queue::front(){
    
}

bool Queue::empty(){
    
}

bool Queue::find(pirate *aPirate){
    
}

void Queue::remove(pirate *aPirate){
    
}