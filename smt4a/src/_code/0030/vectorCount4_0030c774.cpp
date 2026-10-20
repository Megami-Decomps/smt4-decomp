#include "common.h"

extern "C" {

typedef struct Vector {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 end;
} Vector;

/* Returns the number of 4-byte elements between `begin` and `end`. */
s32 vectorCount4_0030c774(Vector *vector)
{
    return (vector->end - vector->begin) >> 2;
}

} /* extern "C" */
