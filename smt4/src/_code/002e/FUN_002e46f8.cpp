#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
} Record;

extern Record *FUN_002498ec(u32 id);
extern s32 FUN_0024c52c(u32 key);

/* Comparison of two ids: by FUN_0024c52c of their record's key, then by the keys themselves. */
s32 FUN_002e46f8(const u16 *a, const u16 *b)
{
    Record *recordA = FUN_002498ec(*a);
    Record *recordB = FUN_002498ec(*b);
    s32 result = FUN_0024c52c(recordA->key) - FUN_0024c52c(recordB->key);

    if (result == 0) {
        result = recordA->key - recordB->key;
    }
    return result;
}

} /* extern "C" */
