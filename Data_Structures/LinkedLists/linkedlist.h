#include "nodes.h"

typedef struct SL_LIST {
  NODE_S *head;
} SL_LIST;

NODE_S* traverse(SL_LIST *list) {
  NODE_S *head = list->head;
  while (head->next != NULL) {
    head = head->next;
  }
  return head;
}  

void addtolistend(SL_LIST *list ,NODE_S *node) {
  if (list->head == NULL) {
    list->head = node;
  } else {
    NODE_S *head;
    head = traverse(list);
    head->next = node;
  } 
}


