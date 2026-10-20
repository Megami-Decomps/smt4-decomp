#include "common.h"

extern "C" {

typedef struct Vector8 {
    /* 0x00 */ u32 begin;
    /* 0x04 */ u32 cursor;
    /* 0x08 */ u32 end;
    /* 0x0C */ u32 *count;
    /* 0x10 */ u32 unk10;
} Vector8;

/* Initialises the vector as empty at `begin`. */
void FUN_0016d374(Vector8 *vector, u32 begin)
{
    vector->begin = begin;
    vector->count = NULL;
    vector->cursor = begin;
    vector->unk10 = 0;
    vector->end = begin;
}

} /* extern "C" */
