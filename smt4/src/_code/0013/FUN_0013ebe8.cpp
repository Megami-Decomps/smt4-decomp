/* Allocates and initializes a 16-byte object from `heap`; returns it, or NULL if the allocation failed. */
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
    /* 0x08 */ u8 flag;
    /* 0x0C */ u32 value;
} HeapObject;

extern u8 DAT_00421504;

HeapObject *FUN_0013ebe8(Heap *heap, u32 value)
{
    HeapObject *obj = (HeapObject *)heap->vtbl->alloc(heap, sizeof(HeapObject), 4);

    if (obj != NULL) {
        obj->heap = heap;
        obj->flag = 0;
        obj->vtbl = &DAT_00421504;
        obj->value = value;
    }
    return obj;
}

}
