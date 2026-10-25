/* NON_MATCHING: the loop compare is `cmp r2, r1` (end, it); retail has `cmp r1, r2`. */
#include "common.h"

extern "C" {

typedef struct Elem32 {
    /* 0x00 */ u8 bytes[0x20];
} Elem32;

typedef struct Vector32 {
    /* 0x0 */ Elem32 *begin;
    /* 0x4 */ Elem32 *end;
} Vector32;

extern void asdOperatorDeleteArray(Elem32 *block);

/* Destroys the elements of the vector and frees its storage; returns the vector. */
Vector32 *FUN_003002ae(Vector32 *vec)
{
    Elem32 *begin = vec->begin;
    Elem32 *it;

    for (it = begin; it != vec->end; it++) {
        it->~Elem32();
    }
    asdOperatorDeleteArray(begin);
    return vec;
}

}
