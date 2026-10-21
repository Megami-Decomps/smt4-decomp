#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ struct Node *next;
} Node;

typedef struct Iterator {
    /* 0x00 */ Node *node;
} Iterator;

/* Advances the iterator to the next node. */
void iteratorAdvance(Iterator *iterator)
{
    iterator->node = iterator->node->next;
}

} /* extern "C" */
