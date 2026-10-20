#include "common.h"

extern "C" {

typedef struct Vector8 {
    /* 0x00 */ u8 *begin;
    /* 0x04 */ u8 *unk04;
    /* 0x08 */ u8 *end;
} Vector8;

/* Returns the number of 8-byte elements in the vector. */
s32 FUN_001321fc(Vector8 *vector)
{
    return (vector->end - vector->begin) >> 3;
}

} /* extern "C" */
