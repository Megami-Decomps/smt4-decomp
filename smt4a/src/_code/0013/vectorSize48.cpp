#include "common.h"

extern "C" {

/* Pointer range of a vector of 48-byte elements: begin, end of used elements, end of storage. */
typedef struct {
    s32 begin;      /* 0x00 */
    s32 end;        /* 0x04 */
    s32 storageEnd; /* 0x08 */
} Vector;

/* Returns the used size in elements of the 48-byte-element vector. */
s32 vectorSize48(Vector *vector)
{
    return (s32)((vector->end - vector->begin) / (48));
}

} /* extern "C" */
