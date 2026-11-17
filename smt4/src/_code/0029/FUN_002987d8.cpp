#include "common.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

extern s32 FUN_0029a9d4(s32 arg, s32 mode);
extern s32 appGetRemainingCapacity(s32 arg);

/* Compares `arg`'s value with the limit of unit `unit` (the player's data when `unit` is negative):
 * the value must not exceed the player's limit, or must be within a unit's. */
s32 FUN_002987d8(s32 unit, s32 arg)
{
    s32 result = 0;

    skillDataFindById(arg);
    if (unit < 0) {
        PlayerDataIV *player = gameGetPlayerData();
        if (FUN_0029a9d4(arg, 1) <= player->mp) {
            result = 1;
        }
    } else {
        StatBlock *record = gameGetUnitRecord(unit);
        if (record->mp >= appGetRemainingCapacity(arg)) {
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
