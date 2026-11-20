#ifndef GAMEDATA_PARTY_SKILL_COST_H
#define GAMEDATA_PARTY_SKILL_COST_H

#include "code/Code003d_Smt4a.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SkillDataRecord.h"

/* Charges the caster's MP using the player or demon cost calculation, then clamps the halfword balance. */
static __inline void chargePartySkillCost(s32 source, const SkillDataRecordA *skill)
{
    if (source < 0) {
        PlayerDataA *player = gameGetPlayerData();
        s16 balance = player->mp - skillGetCostWithRankReduction(skill->identity.id, 1);
        player->mp = balance;
        if (balance < 0) {
            player->mp = 0;
        }
    } else {
        SlotRecordA *unit = gameGetSlotRecord(source);
        s16 balance = unit->mp - skillGetAdjustedCost(unit, skill->identity.id);
        unit->mp = balance;
        if (balance < 0) {
            unit->mp = 0;
        }
    }
}

#endif
