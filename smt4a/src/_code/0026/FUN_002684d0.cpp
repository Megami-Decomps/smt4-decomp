/* NON_MATCHING: skill targeting-mode tests and occupied-slot traversal branches are grouped differently. */
/* Tests the selected skill target or each occupied party slot according to its targeting mode. */
#include "gamedata/Table04Record.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 FUN_002a690c(s32 target, s32 skill, s32 query);
s32 FUN_00333694(s32 target, s32 slot, s32 skill, s32 query);

u32 FUN_002684d0(s32 skillId, s32 target)
{
    Table04Record *skill = dataTable04FindById(skillId);
    if (skill == NULL) {
        return 0;
    }
    u32 mode = (skill->properties >> 9) & 3;
    if ((mode == 1 || mode == 3) && skill->sort.category == 3) {
        u32 scope = (skill->properties >> 5) & 15;
        if (scope == 3 || scope == 8) {
            return FUN_002a690c(target, skillId, 1) == 0;
        }
        SaveSlotTable *party = gameGetSlotTable();
        for (s32 i = -1; i < 24; ++i) {
            s32 result;
            if (i < 0) {
                result = FUN_00333694(target, -1, skillId, 1);
            } else {
                s32 slot = party->party[i];
                if (slot < 0) {
                    continue;
                }
                result = FUN_00333694(target, slot, skillId, 1);
            }
            if (result == 0) {
                return 1;
            }
        }
    }
    return skillId == 140 || skillId == 147;
}
}
