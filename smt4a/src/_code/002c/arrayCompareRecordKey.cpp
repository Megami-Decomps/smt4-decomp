#include "common.h"

struct SortRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 key;
};

/* Orders records by their 16-bit key. */
extern "C" s32 arrayCompareRecordKey(const SortRecord *left, const SortRecord *right)
{
    return left->key - right->key;
}
