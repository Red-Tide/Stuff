#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void) {
  SL_LIST *single;
  NODE_S *test;
  int data[] = {1,2,3,4,5};

  single = (SL_LIST *) malloc(sizeof(SL_LIST));
  test = (NODE_S *) malloc(sizeof(NODE_S)); 

  test->data = (void *) malloc(sizeof(int));
  test->data = &data[0];
  
  addtolistend(single,test); 

  return 0;
}
