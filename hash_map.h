#include <stdio.h> // kanske inte ska vara med i header?




// borde ju kunna ta in min linked list?
// frågan är: Hur gör jag det? då måste linked list bli en header file?
typedef struct node{
    int key;
    int value;
    struct node *next;
} node;

typedef struct hashmap{

    node **nodes; // en länkad lista i varje "bucket"
    size_t capacity;

} hashmap;