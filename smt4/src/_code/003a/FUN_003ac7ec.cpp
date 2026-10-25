#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
} Record;

extern Record *table8Type5FindById(u32 id);
extern s32 FUN_0024c52c(u32 key);

/* Comparison of two ids: by FUN_0024c52c of their record's key, then by id. */
s32 FUN_003ac7ec(const u16 *a, const u16 *b)
{
    Record *recordA = table8Type5FindById(*a);
    Record *recordB = table8Type5FindById(*b);
    s32 result = FUN_0024c52c(recordA->key) - FUN_0024c52c(recordB->key);

    if (result == 0) {
        result = *a - *b;
    }
    return result;
}

} /* extern "C" */
