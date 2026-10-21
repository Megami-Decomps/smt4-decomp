#include "common.h"

struct Table00OrderRecord {
    u8 unk00[6];
    u16 secondaryKey;
    u8 unk08[0x10];
    u16 primaryKey;
};

extern "C" {
const Table00OrderRecord *FUN_00184310(u16 id);

s32 dataTable00CompareOrderKeys(const u16 *left, const u16 *right)
{
    const Table00OrderRecord *leftRecord = FUN_00184310(*left);
    const Table00OrderRecord *rightRecord = FUN_00184310(*right);
    s32 comparison = leftRecord->primaryKey - rightRecord->primaryKey;
    if (comparison == 0) {
        leftRecord = FUN_00184310(*left);
        rightRecord = FUN_00184310(*right);
        comparison = rightRecord->secondaryKey - leftRecord->secondaryKey;
        if (comparison == 0) {
            comparison = *left - *right;
        }
    }
    return comparison;
}
}
