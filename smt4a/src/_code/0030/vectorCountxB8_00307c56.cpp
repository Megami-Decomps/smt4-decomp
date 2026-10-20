#include "common.h"

extern "C" {

typedef struct Vector {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 end;
} Vector;

/* Returns the number of 0xB8-byte elements between `begin` and `end`. */
s32 vectorCountxB8_00307c56(Vector *vector)
{
    return (vector->end - vector->begin) / 0xB8;
}

} /* extern "C" */
