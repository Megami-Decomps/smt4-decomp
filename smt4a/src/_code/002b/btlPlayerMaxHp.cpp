/* NON_MATCHING: retail uses even register pairs and LDRD for the exclusion and actor masks; the build uses LDM and assigns the HP fallback and entry base differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"
#include "gamedata/BattleUnitSkills.h"

extern "C" {

/* Returns the unit's in-battle maximum HP when available, or the value in its record. */
s32 btlPlayerMaxHp(BtlUnitRecordA *record)
{
    BtlMainGlobalsA *btlMainPtr = &g_btlMain;
    BtlMainStateA *state = btlMainPtr->state;
    s32 maxHp = record->maximum.maxHp;

    if (state != NULL && state->unk0088 != 29) {
        for (s32 i = 0; i < 109; i++) {
            BtlCombatantEntryA *entry = &state->entries[i];

            if ((entry->flags & btlMainPtr->combatantMasks.required) != 0 &&
                (entry->flags & btlMainPtr->exclusionMask) == 0 &&
                (entry->flags & btlMainPtr->actorCategories[0]) != 0 && entry->data.record == record) {
                maxHp = entry->data.maxHp;
                break;
            }
        }
    }
    return maxHp;
}

} /* extern "C" */
