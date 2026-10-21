/* NON_MATCHING: after the conditional unit-scale tests, the final identity-flag OR/store uses r1 instead of retail's r3. */
#include "shard/W4_Match1b_Node.h"

struct ModelScaleRecord {
    u32 flags;       // 0x00
    NodeVec3 scale;  // 0x04
    u8 unk10[0x30];
};

struct ModelScaleTable {
    u8 unk00[0x0c];
    ModelScaleRecord *records; // 0x0c
    s32 count;                // 0x10
};

extern "C" {
// Cache the identity-scale flags for records whose three scale components are one.
void FUN_0018eb44(ModelScaleTable *table)
{
    const u32 unitScaleFlags = 0x02800000;
    ModelScaleRecord *record = table->records;
    ModelScaleRecord *end = record + table->count;
    while (record != end) {
        const NodeVec3 *scale = &record->scale;
        if ((~record->flags & unitScaleFlags) != 0 &&
            scale->x == 1.0f &&
            scale->y == 1.0f &&
            scale->z == 1.0f)
            record->flags |= unitScaleFlags;
        ++record;
    }
}
}
