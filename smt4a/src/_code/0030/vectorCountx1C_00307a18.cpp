#include "common.h"

extern "C" {

typedef struct Vector {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 end;
} Vector;

/* Returns the number of 0x1C-byte elements between `begin` and `end` (at 8). */
s32 vectorCountx1C_00307a18(Vector *vector)
{
    return (vector->end - vector->begin) / 0x1C;
}

} /* extern "C" */
