#include "common.h"

extern "C" {

typedef struct Vector {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 end;
} Vector;

/* Returns the number of 2-byte elements between `begin` and `end`. */
s32 vectorCount2_002f00e8(Vector *vector)
{
    return (vector->end - vector->begin) >> 1;
}

} /* extern "C" */
