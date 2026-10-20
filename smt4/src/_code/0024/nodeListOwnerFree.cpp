#include "common.h"

extern "C" {

int asdMemFree(void *ptr);

typedef struct Node {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ struct Node *next;
} Node;

typedef struct Owner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ void *buffer;
    /* 0x8 */ Node *head;
} Owner;

/* Frees the owner's node list, its buffer and the owner. */
void nodeListOwnerFree(Owner *owner)
{
    Node *node = owner->head;
    Node *next;

    while (node != NULL) {
        next = node->next;
        asdMemFree(node);
        node = next;
    }
    if (owner->buffer != NULL) {
        asdMemFree(owner->buffer);
    }
    asdMemFree(owner);
}

} /* extern "C" */
