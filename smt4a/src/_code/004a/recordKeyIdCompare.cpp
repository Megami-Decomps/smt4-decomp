#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
} Record;

Record *FUN_00480ba0(u32 id);
s32 FUN_003a6868(u16 key);

/* Compares two record ids by their records' keys (via FUN_003a6868), then by id. */
s32 recordKeyIdCompare(u16 *a, u16 *b)
{
    Record *recordA = FUN_00480ba0(*a);
    Record *recordB = FUN_00480ba0(*b);
    s32 diff = FUN_003a6868(recordB->key) - FUN_003a6868(recordA->key);

    if (diff == 0) {
        diff = *b - *a;
    }
    return diff;
}

} /* extern "C" */
