/* NON_MATCHING: 140 lines off: same shape as retail, but armcc factors extraWords * 4 + count * 4 into one shift
 * (retail keeps two) and gives recordWords, count and the byte total other registers (retail r2/r7/r1). */
#include "shard/Resource.h"

/* Size the record data, group tables, and primary-to-secondary binding workspaces. */
extern "C" u32 FUN_001cd064(const ResourceSizingState *resource)
{
    u32 count = resource->count;
    u32 bytes = resource->extraWords * 4 + count * 4;
    u32 recordWords = 0;
    for (u8 index = 0; index < count; ++index) {
        const ResourceSizingGroup *group = resource->groups[index];
        const ResourceSizingRecord *records = group->records();
        for (u32 record = 0; record < group->count; ++record) {
            switch (records[record].kind) {
            case 0:
                break;
            case 1:
                recordWords += 2;
                break;
            case 2:
                recordWords += 6;
                break;
            }
        }
    }
    bytes += recordWords * 4;
    u32 secondaryCount = 0;
    for (u32 index = 0; index < count; ++index) {
        secondaryCount += resource->groups[index]->secondary;
    }
    u32 pairCount = (count - secondaryCount) * (secondaryCount + 1);
    bytes += pairCount * 4;
    for (u8 index = 0; index < count; ++index) {
        if (resource->groups[index]->secondary == 0) {
            bytes += 0x98;
            for (s32 other = 0; other < (s32)count; ++other) {
                const ResourceSizingGroup *group = resource->groups[other];
                if (group->secondary != 0) {
                    bytes += group->variant == 1 ? 0xC8 : 0xC0;
                }
            }
        }
    }
    return bytes + count * 4 + count * 4 + 4 + pairCount * 4;
}
