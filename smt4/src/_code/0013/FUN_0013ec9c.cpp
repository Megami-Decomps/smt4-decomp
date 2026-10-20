#include "shard/HeapObject.h"

extern "C" {

extern u8 DAT_004215ac;

/* Allocates and initializes a 16-byte object from `heap`; returns it, or NULL if the allocation failed. */
HeapObject *FUN_0013ec9c(Heap *heap, u32 value)
{
    HeapObject *obj = (HeapObject *)heap->vtbl->alloc(heap, sizeof(HeapObject), 4);

    if (obj != NULL) {
        obj->heap = heap;
        obj->flag = 0;
        obj->vtbl = &DAT_004215ac;
        obj->value = value;
    }
    return obj;
}

} /* extern "C" */
