#include "common.h"

extern "C" {

typedef struct Allocator Allocator;
typedef struct AllocatorVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ void *(*alloc)(Allocator *self, int size, int align);
} AllocatorVtbl;
struct Allocator {
    /* 0x00 */ AllocatorVtbl *vtbl;
};

typedef struct Node {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ Allocator *allocator;
    /* 0x08 */ u8 flag;
    /* 0x0C */ u32 value;
} Node;

extern u8 DAT_0055b8d8;

/* Allocates a Node from `allocator` and initializes it with its owner and value; returns it (NULL if allocation failed). */
Node *FUN_001ca5d0(Allocator *allocator, u32 value)
{
    Node *node = (Node *)allocator->vtbl->alloc(allocator, sizeof(Node), 4);

    if (node != NULL) {
        node->allocator = allocator;
        node->flag = 0;
        node->vtbl = &DAT_0055b8d8;
        node->value = value;
    }
    return node;
}

} /* extern "C" */
