#include "common.h"

extern "C" {

typedef struct Vector {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 end;
} Vector;

/* Returns the number of 8-byte elements between `begin` and `end` (at 8). */
s32 vectorCount8_0030756a(Vector *vector)
{
    return (vector->end - vector->begin) >> 3;
}

} /* extern "C" */
