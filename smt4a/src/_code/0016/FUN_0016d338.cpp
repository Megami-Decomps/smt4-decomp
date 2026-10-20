#include "common.h"

extern "C" {

typedef struct Vector8 {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 cursor;
    /* 0x08 */ s32 end;
    /* 0x0C */ u32 *count;       /* optional: receives the element count (8-byte elements) */
    /* 0x10 */ u32 unk10;
} Vector8;

/* Resets the vector to start at `begin`: reports the old size through `count` if set, then collapses it to empty. */
void FUN_0016d338(Vector8 *vector, s32 begin)
{
    vector->begin = begin;
    if (vector->count != NULL) {
        *vector->count = (u32)(begin - vector->end) >> 3;
    }
    vector->cursor = vector->begin;
    vector->count = NULL;
    vector->end = vector->begin;
    vector->unk10 = 0;
}

} /* extern "C" */
