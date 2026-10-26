/* NON_MATCHING: the two initialising stores are predicated (ldrne/stmne) instead of branched over (beq); needs the real class so the compiler emits the vptr store. */
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
} Node;

extern u8 DAT_004214a4;

/* Allocates a Node from `allocator` and initializes it with its owner. */
void FUN_00368ab0(Allocator *allocator)
{
    Node *node = (Node *)allocator->vtbl->alloc(allocator, sizeof(Node), 4);

    if (node != NULL) {
        node->vtbl = &DAT_004214a4;
        node->allocator = allocator;
    }
}

} /* extern "C" */
