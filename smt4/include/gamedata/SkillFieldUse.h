/* IV: the field (out-of-battle) use of a skill on the party (skillUseOnParty, skillUseOnTarget). */
#ifndef SMT4_GAMEDATA_SKILLFIELDUSE_H
#define SMT4_GAMEDATA_SKILLFIELDUSE_H

#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"
#include "status/StatusCamera.h"

extern "C" {
/* Applies a restoring skill or item effect to the player (target < 0) or to party unit `target`; with `preview`
 * set nothing is written and the HP that would be restored goes to `amountOut`. 0 when the effect does something. */
u32 skillApplyRestoreToMember(s32 source, s32 target, const SkillDataRecord *effect, s32 preview, s32 *amountOut);
}

/* Charges the MP cost of `skill` to its user: a negative unit is the player, who pays the discounted cost,
 * otherwise the unit record pays the skill's own cost. MP stops at 0. Both field-use functions charge the
 * cost this way; retail tests the unit with `subs r0, rN, #0` (the inlined parameter) in each. */
static __inline void skillPayMpCost(s32 unit, const SkillDataRecord *skill)
{
    if (unit < 0) {
        PlayerDataIV *player = gameGetPlayerData();
        s16 mp = player->mp - skillGetDiscountedCost(skill->identity.id, 1);
        player->mp = mp;
        if (mp < 0) {
            player->mp = 0;
        }
    } else {
        StatBlock *record = gameGetUnitRecord(unit);
        s16 mp = record->mp - appGetRemainingCapacity(skill->identity.id);
        record->mp = mp;
        if (mp < 0) {
            record->mp = 0;
        }
    }
}

#endif
