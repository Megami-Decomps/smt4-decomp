#include "common.h"

extern "C" {

typedef struct Vector {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 end;
} Vector;

/* Returns the number of 0x28-byte elements between `begin` and `end`. */
s32 vectorCountx28_0030fd70(Vector *vector)
{
    return (vector->end - vector->begin) / 0x28;
}

} /* extern "C" */
