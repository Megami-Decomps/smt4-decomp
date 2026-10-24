#include "common.h"

extern "C" {

typedef struct Vector8 {
    /* 0x00 */ u8 *begin;
    /* 0x04 */ u8 *unk04;
    /* 0x08 */ u8 *end;
} Vector8;

/* Returns the number of 8-byte elements in the vector. */
s32 _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE8capacityEv(Vector8 *vector)
{
    return (vector->end - vector->begin) >> 3;
}

} /* extern "C" */
