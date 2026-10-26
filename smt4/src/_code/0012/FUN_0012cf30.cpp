/* NON_MATCHING: if-conversion only: retail branches over the two stores (`beq`), built predicates them (`ldrne`/`stmne`); needs the real class so the compiler emits the vptr store. */
/* Allocates and initializes an 8-byte object from `heap`, remembering the heap; returns it, or NULL if the allocation failed. */
#include "common.h"

extern "C" {

struct Heap;

typedef struct HeapVtbl {
    void *unk00;
    void *unk04;
    void *(*alloc)(struct Heap *heap, u32 size, u32 align); /* 0x08 */
} HeapVtbl;

typedef struct Heap {
    HeapVtbl *vtbl;
} Heap;

typedef struct HeapObject {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ Heap *heap;
} HeapObject;

extern u8 DAT_004213cc;

HeapObject *FUN_0012cf30(Heap *heap)
{
    HeapObject *obj = (HeapObject *)heap->vtbl->alloc(heap, sizeof(HeapObject), 4);

    if (obj != NULL) {
        obj->vtbl = &DAT_004213cc;
        obj->heap = heap;
    }
    return obj;
}

}
