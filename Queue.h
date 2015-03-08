#ifndef QUEUE_H
#define QUEUE_H

#include "Pirate.h"

class Queue
{
    class Node 
    {
        friend class Queue;
        private:
            Pirate* data;
            Node*   next;
            Node*   prev;
    };
    
    public:
        Queue();
        Queue(Queue&);
        ~Queue();
        void push(Pirate*);
        void pop();
        Pirate* front();
        bool empty();
        bool contains(int);
        void remove(int);
    private:
        Node* head;
};

#endif
