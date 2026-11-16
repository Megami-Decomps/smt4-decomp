#include "common.h"

struct Table00OrderRecord {
    u8 unk00[6];
    u16 secondaryKey;
    u8 unk08[0x10];
    u16 primaryKey;
};

extern "C" {
const Table00OrderRecord *devilGetRecord(u16 id);

s32 dataTable00CompareOrderKeys(const u16 *left, const u16 *right)
{
    const Table00OrderRecord *leftRecord = devilGetRecord(*left);
    const Table00OrderRecord *rightRecord = devilGetRecord(*right);
    s32 comparison = leftRecord->primaryKey - rightRecord->primaryKey;
    if (comparison == 0) {
        leftRecord = devilGetRecord(*left);
        rightRecord = devilGetRecord(*right);
        comparison = rightRecord->secondaryKey - leftRecord->secondaryKey;
        if (comparison == 0) {
            comparison = *left - *right;
        }
    }
    return comparison;
}
}
