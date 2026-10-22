#include "shard/W4_Match6_BtlEntry.h"
#include "shard/PassiveSkill.h"

extern "C" {

BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, u32 id);
void FUN_0022abe0(BtlEntry *entry, u16 *skills);
s32 randRange(u32 range);

/* Rolls the listed entry's passive skills in order and returns the first that triggers, or 0. */
u16 btlEntryRollPassiveSkill(u32 id)
{
    BtlMainState *state = btlGetMainState();
    BtlEntry *entry = btlMainFindEntryByListedId(state, id);
    u16 skills[10] = {0};
    s32 i;

    FUN_0022abe0(entry, skills);
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
