#include "common.h"

extern "C" {

typedef struct Elem8 {
    u32 a;
    u32 b;
} Elem8;

typedef struct Vector8 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Elem8 *end;
    /* 0x08 */ Elem8 *capacityEnd;
} Vector8;

extern int FUN_00307ce2(Vector8 *vec, Elem8 *where, const Elem8 *value);
extern int FUN_00133162(Vector8 *vec, Elem8 *where, const Elem8 *value);

/* push_back for 8-byte elements: constructs in place while there is room, else reallocates. */
void FUN_002f1306(Vector8 *vec, const Elem8 *value)
{
    if (vec->end != vec->capacityEnd) {
        vec->end++;
        FUN_00307ce2(vec, vec->end - 1, value);
        return;
    }
    FUN_00133162(vec, vec->end, value);
}

} /* extern "C" */
