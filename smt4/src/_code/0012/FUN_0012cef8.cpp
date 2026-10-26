/* NON_MATCHING: if-conversion only: retail branches over the two stores (`beq`), built predicates them (`ldrne`/`stmne`); needs the real class so the compiler emits the vptr store. */
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

extern u8 DAT_0042137c;

/* Allocates a Node from `allocator` and initializes it with its owner. */
void FUN_0012cef8(u32 unused, Allocator *allocator)
{
    Node *node = (Node *)allocator->vtbl->alloc(allocator, sizeof(Node), 4);

    if (node != NULL) {
        node->vtbl = &DAT_0042137c;
        node->allocator = allocator;
    }
}

} /* extern "C" */
