/* NON_MATCHING: retail writes the four party entries out one by one (ours is a loop), keeps the flags word at 0x44A0 in a stack slot and has an extra zeroed term cleared when its bit 1 is set (`movne sl, #0` on an already zero register) that is not recoverable; the formula and branches agree */
#include "battle/BtlMainAccess.h"
#include "battle/BattleEntries.h"

extern "C" {

s32 FUN_002973ec(void);

/* Chance in percent (0..100) that the party escapes: compares the party's average stats with the
 * enemies', with a difficulty term and a penalty when the battle is a surprise one. */
s32 FUN_003bf1e4(void)
{
    BtlMainState *state = btlGetMainState();
    if ((state->encounter.flags & 0x40000) != 0) {
        return 0;
    }
    if ((state->battleFlags & 0x40000) != 0 || (state->editorControl.flags & 0x400000) != 0) {
        return 100;
    }
    if ((state->editorControl.flags & 0x800000) != 0) {
        return 0;
    }

    BtlEntry *entries = state->entries;
    s32 partyCount = 0;
    s32 partyAgility = 0;
    s32 partyLuck = 0;
    for (s32 i = 0; i < 4; i++) {
        if ((entries[i].flags & 1) != 0 && (entries[i].flags & 0x40) == 0) {
            partyCount++;
            partyAgility += entries[i].speed;
            partyLuck += entries[i].luck;
        }
    }
    s32 enemyCount = 0;
    s32 enemyAgility = 0;
    s32 enemyLuck = 0;
    for (s32 i = 4; i < 54; i++) {
        if ((entries[i].flags & 1) != 0 && (entries[i].flags & 0x40) == 0) {
            enemyCount++;
            enemyAgility += entries[i].speed;
            enemyLuck += entries[i].luck;
        }
    }
    s32 agilityGap = partyAgility / partyCount - enemyAgility / enemyCount;
    s32 luckGap = partyLuck / partyCount - enemyLuck / enemyCount;
    s32 surprise = 0;
    if (btlFindNthActiveSpecialEntry(state, 1) >= 0) {
        surprise = -50;
    }
    s32 chance = agilityGap + luckGap / 2 + state->encounterControl.difficulty * 10 + surprise + 50;
    s32 mode = FUN_002973ec();
    if (mode != 1) {
        if (mode == 2 || chance < 0) {
            return 0;
        }
        if (chance <= 100) {
            return chance;
        }
    }
    return 100;
}

}
