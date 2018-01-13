
//Singly Linked List
typedef struct NODE_S {
  void *data;
  struct NODE_S *next;
} NODE_S;

//Doubly Linked List
typedef struct NODE_D {
  void *data;
  struct NODE_D *next;
  struct NODE_D *prev;
} NODE_D;
