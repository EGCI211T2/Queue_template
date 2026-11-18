#include <iostream>
#include <cstring>
using namespace std;
#include "Queue.h"

int main(int argc , char **argv) {
  Queue q;
  NodePtr t;
   int i,x;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            t=q.dequeue();
            if(x!=NULL) delete t;
        }
        else {
          t=new NODE(atoi(argv[i]));
          q.enqueue(t);
           
        }
 }
  return 0;
}
