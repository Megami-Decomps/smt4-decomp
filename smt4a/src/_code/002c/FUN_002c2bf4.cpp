#include "shard/W6_W6Match6_CompactSortRecord.h"

extern "C" {

s32 FUN_002c2bf4(const u16 *left, const u16 *right)
{
    CompactSortRecord *leftRecord = findSkillMetadataById(*left);
    CompactSortRecord *rightRecord = findSkillMetadataById(*right);
    s32 result = (rightRecord->flags & 0x1f) - (leftRecord->flags & 0x1f);
    if (result == 0) {
        result = leftRecord->category - rightRecord->category;
        if (result == 0)
            result = leftRecord->id - rightRecord->id;
    }
    return result;
}
}
