#include "common.h"

extern "C" {

typedef struct Vector4 {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 end;
} Vector4;

/* Returns the number of 4-byte elements between `begin` and `end`. */
s32 vectorCount4_002eeb88(Vector4 *vector)
{
    return (vector->end - vector->begin) >> 2;
}

} /* extern "C" */
