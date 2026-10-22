/* NON_MATCHING: the record and secondary-group counting loops use different induction/accumulator registers and unrolling, and size arithmetic is scheduled later. */
#include "shard/Resource.h"

/* Size the record data, group tables, and primary-to-secondary binding workspaces. */
extern "C" u32 FUN_001cd064(const ResourceSizingState *resource)
{
    u32 recordWords = 0;
    u32 count = resource->count;
    for (u8 index = 0; index < count; ++index) {
        const ResourceSizingGroup *group = resource->groups[index];
        for (u32 record = 0; record < group->count; ++record) {
            switch (group->records()[record].kind) {
            case 1:
                recordWords += 2;
                break;
            case 2:
                recordWords += 6;
                break;
            }
        }
    }
    u32 secondaryCount = 0;
    for (u32 index = 0; index < count; ++index) {
        secondaryCount += resource->groups[index]->secondary;
    }
    u32 pairCount = (count - secondaryCount) * (secondaryCount + 1);
    u32 bytes = resource->extraWords * 4 + count * 4 + recordWords * 4 + pairCount * 4;
    for (u8 index = 0; index < count; ++index) {
        if (resource->groups[index]->secondary == 0) {
            bytes += 0x98;
            for (u32 other = 0; other < count; ++other) {
                const ResourceSizingGroup *group = resource->groups[other];
                if (group->secondary != 0) {
                    bytes += group->variant == 1 ? 0xC8 : 0xC0;
                }
            }
        }
    }
    return bytes + count * 8 + 4 + pairCount * 4;
}
