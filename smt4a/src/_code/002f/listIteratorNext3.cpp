#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct Node *next;
} Node;

typedef struct Iterator {
    /* 0x00 */ Node *node;
} Iterator;

/* Advances the iterator to the next node (the link at 4). */
void listIteratorNext3(Iterator *iterator)
{
    iterator->node = iterator->node->next;
}

} /* extern "C" */
