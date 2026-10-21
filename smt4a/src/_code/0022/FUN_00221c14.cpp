#include "common.h"

extern "C" {

struct KeyedRecord {
    /* 0x00 */ u8 unk00[0x2];
    /* 0x02 */ s16 key;
};
/* Compares pointed-to records for sorting. */
s32 FUN_00221c14(const KeyedRecord *const *left, const KeyedRecord *const *right)
{
    s32 leftKey = (*left)->key;
    s32 rightKey = (*right)->key;
    return rightKey - leftKey;
}

} /* extern "C" */
