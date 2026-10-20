#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
} Record;

extern Record *FUN_00480ba0(u32 id);
extern s32 FUN_003a6868(u32 key);

/* Comparison of two ids: by FUN_003a6868 of their record's key, then by id. */
s32 FUN_004a7018(const u16 *a, const u16 *b)
{
    Record *recordA = FUN_00480ba0(*a);
    Record *recordB = FUN_00480ba0(*b);
    s32 result = FUN_003a6868(recordA->key) - FUN_003a6868(recordB->key);

    if (result == 0) {
        result = *a - *b;
    }
    return result;
}

} /* extern "C" */
