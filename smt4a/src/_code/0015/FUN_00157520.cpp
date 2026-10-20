#include "common.h"

extern "C" {

typedef struct Elem48 {
    u32 words[12];
} Elem48;                         /* 0x30 bytes */

typedef struct Vector48 {
    /* 0x00 */ Elem48 *begin;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ Elem48 *end;
} Vector48;

extern int FUN_001006ec(Elem48 *first, int count, int arg);

/* Runs FUN_001006ec over all elements of the vector and returns the vector. */
Vector48 *FUN_00157520(Vector48 *vec)
{
    Elem48 *first = vec->begin;

    FUN_001006ec(first, vec->end - first, 0);
    return vec;
}

} /* extern "C" */
