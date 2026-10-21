#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ struct Node *next;
    /* 0x10 */ struct Node *prev;
} Node;

/* Links two nodes through their iterators: the first one's next becomes the second, whose prev becomes the first. */
void nodeListLink(u32 unused, Node **first, Node **second)
{
    Node *node = *first;

    node->next = *second;

    node = *second;
    node->prev = *first;
}

} /* extern "C" */
