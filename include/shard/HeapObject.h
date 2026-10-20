/* A 16-byte object allocated through a heap's vtable (alloc is slot 2). */
#ifndef SHARD_HEAPOBJECT_H
#define SHARD_HEAPOBJECT_H

#include "common.h"

struct Heap;
typedef struct HeapVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ void *(*alloc)(struct Heap *heap, u32 size, u32 align);
} HeapVtbl;

typedef struct Heap {
    /* 0x00 */ HeapVtbl *vtbl;
} Heap;

typedef struct HeapObject {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ Heap *heap;
    /* 0x08 */ u8 flag;
    /* 0x0C */ u32 value;
} HeapObject;

#endif
