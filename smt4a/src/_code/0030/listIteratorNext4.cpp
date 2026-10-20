#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ struct Node *next;
} Node;

typedef struct Iterator {
    /* 0x00 */ Node *node;
} Iterator;

/* Advances the iterator to the next node (the link at 0xC). */
void listIteratorNext4(Iterator *iterator)
{
    iterator->node = iterator->node->next;
}

} /* extern "C" */
