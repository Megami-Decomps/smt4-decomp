#include "common.h"
#include "gamedata/SkillFlags.h"

extern "C" {

s32 dataTable06Sub1CompareBySortKeys(const u16* leftId, const u16* rightId)
{
    const SkillFlagsRecord* left = dataTable06Sub1GetRecord(*leftId);
    const SkillFlagsRecord* right = dataTable06Sub1GetRecord(*rightId);
    s32 difference = (right->flags & 0x1f) - (left->flags & 0x1f);
    if (difference == 0) {
        difference = left->category - right->category;
        if (difference == 0) {
            difference = left->id - right->id;
        }
    }
    return difference;
}

} /* extern "C" */
