#include "shard/PassiveSkill.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

#define BTL_FLAG_PASSIVE_ALWAYS 0x40000 /* BtlMainState.battleFlags: passive rolls always succeed */

extern "C" {

BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, u32 id);
void FUN_0022abe0(BtlEntry *entry, u16 *skillIds);
s32 randRange(s32 max);

/* Rolls the listed unit's passive skills in order and returns the first one whose chance hits
 * (0 when none does). */
u16 btlRollPassiveSkill(u32 listedId)
{
    BtlMainState *state = btlGetMainState();
    BtlEntry *entry = btlMainFindEntryByListedId(state, listedId);
    u16 skillIds[10] = {0};
    u16 result;
    s32 i;

    FUN_0022abe0(entry, skillIds);
    result = 0;
    for (i = 0; i < 9; i++) {
        if (skillIds[i] != 0) {
            const PassiveSkillRecord *record = passiveSkillLookupRecord(skillIds[i]);
            s32 chance;
            if (record != NULL && (chance = record->holdChance) != 0) {
                s32 roll = randRange(99);
                if (state->battleFlags & BTL_FLAG_PASSIVE_ALWAYS) {
                    roll = 0;
                }
                if (chance > roll) {
                    result = skillIds[i];
                    break;
                }
            }
        }
    }
    return result;
}

} /* extern "C" */
