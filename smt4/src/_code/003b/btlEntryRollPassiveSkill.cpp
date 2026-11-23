#include "battle/BtlEntry.h"
#include "util/Random.h"
#include "battle/btlMain.h"
#include "shard/PassiveSkill.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {

void btlEntryGetPassiveSkillIds(BtlEntry *entry, u16 *skills);

/* Rolls the listed entry's passive skills in order and returns the first that triggers, or 0. */
u16 btlEntryRollPassiveSkill(u32 id)
{
    BtlMainState *state = btlGetMainState();
    BtlEntry *entry = btlMainFindEntryByListedId(state, id);
    u16 skills[10] = {0};
    s32 i;

    btlEntryGetPassiveSkillIds(entry, skills);
    u16 triggered = 0;
    for (i = 0; i < 9; i++) {
        if (skills[i] == 0) {
            continue;
        }
        const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[i]);
        if (skill == NULL) {
            continue;
        }
        u8 chance = skill->triggerChance;
        if (chance == 0) {
            continue;
        }
        s32 roll = randRange(99);
        if (state->battleFlags & 0x40000) {
            roll = 0;
        }
        if (chance > roll) {
            triggered = skills[i];
            break;
        }
    }
    return triggered;
}

} /* extern "C" */
