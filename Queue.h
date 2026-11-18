
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(NodePtr);
    NodePtr dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(NodePtr new_node){
if(new_node){ 
    /* Add head and tail for me please */
   1. connect & Change tail
  2. (may be) change head  when the queue is empty
  3. increase size */
	
 }
}

NodePtr Queue::dequeue(){
  if(size>0){
    
     /* Add head and tail for me please */
          
    
  }
  cout<<"Empty queue";
  return NULL;
}


Queue::Queue(){
    //initialize Queue
    
}
Queue::~Queue(){
      
    //delete all remaning Queue (i.e. DQ all) 
    
}


#endif
