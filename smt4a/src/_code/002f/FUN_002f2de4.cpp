#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ struct Node *next;
} Node;

typedef struct Iterator {
    /* 0x00 */ Node *node;
} Iterator;

/* Advances the iterator to the next node (the link at 0x1C). */
void FUN_002f2de4(Iterator *iterator)
{
    iterator->node = iterator->node->next;
}

} /* extern "C" */
