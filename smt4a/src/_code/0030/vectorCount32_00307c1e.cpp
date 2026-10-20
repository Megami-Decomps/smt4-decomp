#include "common.h"

extern "C" {

typedef struct Vector {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 end;
} Vector;

/* Returns the number of 32-byte elements between `begin` and `end` (at 8). */
s32 vectorCount32_00307c1e(Vector *vector)
{
    return (vector->end - vector->begin) >> 5;
}

} /* extern "C" */
