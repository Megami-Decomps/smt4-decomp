/* NON_MATCHING: 180 lines: retail writes the four party entries out one by one (each through its own entry pointer; the build keeps the loop) and keeps the flags word at 0x44A0 and the difficulty in stack slots; the averages, the zeroed bonus term (`movne sl, #0`), the formula and the mode/clamp tail now follow retail (as in the Apocalypse twin FUN_004c67d0) */
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
        BtlEntry *entry = &entries[i];
        if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0) {
            partyCount++;
            partyAgility += entry->data.agility;
            partyLuck += entry->data.luck;
        }
    }
    partyAgility /= partyCount;
    partyLuck /= partyCount;
    s32 enemyCount = 0;
    s32 enemyAgility = 0;
    s32 enemyLuck = 0;
    for (s32 i = 4; i < 54; i++) {
        BtlEntry *entry = &entries[i];
        if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0) {
            enemyCount++;
            enemyAgility += entry->data.agility;
            enemyLuck += entry->data.luck;
        }
    }
    enemyAgility /= enemyCount;
    enemyLuck /= enemyCount;
    s32 chance = partyAgility - enemyAgility + (partyLuck - enemyLuck) / 2;
    s32 bonus = 0;
    /* Retail performs this test and the store (movne) although the bonus is already 0. */
    if ((state->battleFlags & 2) != 0) {
        bonus = 0;
    }
    s32 surprise = 0;
    if (btlFindNthActiveSpecialEntry(state, 1) >= 0) {
        surprise = -50;
    }
    chance = chance + bonus + state->encounterControl.difficulty * 10 + surprise + 50;
    s32 mode = FUN_002973ec();
    if (mode == 1) {
        chance = 100;
    } else if (mode == 2) {
        chance = 0;
    }
    if (chance < 0) {
        chance = 0;
    } else if (chance > 100) {
        chance = 100;
    }
    return chance;
}

}
