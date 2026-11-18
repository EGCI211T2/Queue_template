#include <iostream>
#include <cstring>
using namespace std;
#include "Queue.h"
/* For order */
int main(int argc , char **argv) {
  Queue q;
  NodePtr t;
   int i,x;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            t=q.dequeue();
            if(x!=NULL) {
                //Calculate the price
                   //Ask for the price
              q.dequeue();
            }
        }
        else {
          t=new NODE(atoi(argv[i]),atoi(argv[i+1]));
          q.enqueue(t);
           
        }
 }
  return 0;
}
