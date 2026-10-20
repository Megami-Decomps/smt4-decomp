#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
} Record;

Record *FUN_002498ec(u32 id);
s32 FUN_0024c52c(u16 key);

/* Compares two record ids by their records' keys (via FUN_0024c52c), then by id. */
s32 FUN_003acb9c(u16 *a, u16 *b)
{
    Record *recordA = FUN_002498ec(*a);
    Record *recordB = FUN_002498ec(*b);
    s32 diff = FUN_0024c52c(recordB->key) - FUN_0024c52c(recordA->key);

    if (diff == 0) {
        diff = *b - *a;
    }
    return diff;
}

} /* extern "C" */
