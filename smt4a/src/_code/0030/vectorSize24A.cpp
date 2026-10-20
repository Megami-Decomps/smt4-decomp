#include "common.h"

extern "C" {

/* Pointer range of a vector of 24-byte elements: begin, end of used elements, end of storage. */
typedef struct {
    s32 begin;      /* 0x00 */
    s32 end;        /* 0x04 */
    s32 storageEnd; /* 0x08 */
} Vector;

/* Returns the used size in elements of the 24-byte-element vector. */
s32 vectorSize24A(Vector *vector)
{
    return (s32)((vector->end - vector->begin) / (24));
}

} /* extern "C" */
