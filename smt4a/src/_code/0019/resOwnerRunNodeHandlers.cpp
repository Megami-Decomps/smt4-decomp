#include "shard/Resource.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ Resource *resource;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xAC */ struct Node *next;
} Node;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88[4];
    /* 0x8C */ Node *first;
} Owner;

/* Runs each node's resource handler callback (if its type has one) on the resource data, then clears the word at 0x84. */
void resOwnerRunNodeHandlers(Owner *owner)
{
    void (*callback)(void *data);
    Node *node;

    for (node = owner->first; node != NULL; node = node->next) {
        callback = g_handlerTable[node->resource->type].callback;
        if (callback != NULL) {
            callback(node->resource->data);
        }
    }
    owner->unk84 = 0;
}

} /* extern "C" */
