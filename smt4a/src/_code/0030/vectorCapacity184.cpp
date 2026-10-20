#include "common.h"

extern "C" {

/* Pointer range of a vector of 184-byte elements: begin, end of used elements, end of storage. */
typedef struct {
    s32 begin;      /* 0x00 */
    s32 end;        /* 0x04 */
    s32 storageEnd; /* 0x08 */
} Vector;

/* Returns the capacity in elements of the 184-byte-element vector. */
s32 vectorCapacity184(Vector *vector)
{
    return (s32)((vector->storageEnd - vector->begin) / (184));
}

} /* extern "C" */
