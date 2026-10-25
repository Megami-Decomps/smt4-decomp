/* NON_MATCHING: retail writes the four party entries out one by one (ours is a loop), keeps the flags word at 0x44A0 in a stack slot and has an extra zeroed term cleared when its bit 1 is set (`movne sl, #0` on an already zero register) that is not recoverable; the formula and branches agree */
#include "battle/BtlMainAccess.h"
#include "battle/BattleEntries.h"

/* The battle main state (observed fields). */
struct BattleEscapeState {
    /* 0x0000 */ u8 unk0000[0xE0];
    /* 0x00E0 */ u32 flags;
    /* 0x00E4 */ u8 unk00E4[0x1EDC];
    /* 0x1FC0 */ BattleEntry *entries;
    /* 0x1FC4 */ u8 unk1FC4[0x24DC];
    /* 0x44A0 */ u32 partyFlags;
    /* 0x44A4 */ u8 unk44A4[4];
    /* 0x44A8 */ u32 stateFlags;
    /* 0x44AC */ u8 unk44AC[0xA];
    /* 0x44B6 */ u8 difficulty;
};

extern "C" {

s32 btlFindNthActiveSpecialEntry(BattleEscapeState *state, s32 flag);
s32 FUN_002973ec(void);

/* Chance in percent (0..100) that the party escapes: compares the party's average stats with the
 * enemies', with a difficulty term and a penalty when the battle is a surprise one. */
s32 FUN_003bf1e4(void)
{
    BattleEscapeState *state = reinterpret_cast<BattleEscapeState *>(btlGetMainState());
    if ((state->flags & 0x40000) != 0) {
        return 0;
    }
    if ((state->partyFlags & 0x40000) != 0 || (state->stateFlags & 0x400000) != 0) {
        return 100;
    }
    if ((state->stateFlags & 0x800000) != 0) {
        return 0;
    }

    BattleEntry *entries = state->entries;
    s32 partyCount = 0;
    s32 partyAgility = 0;
    s32 partyLuck = 0;
    for (s32 i = 0; i < 4; i++) {
        if ((entries[i].flags & 1) != 0 && (entries[i].flags & 0x40) == 0) {
            partyCount++;
            partyAgility += *(s16 *)((u8 *)&entries[i] + 0x1C2);
            partyLuck += *(s16 *)((u8 *)&entries[i] + 0x1C4);
        }
    }
    s32 enemyCount = 0;
    s32 enemyAgility = 0;
    s32 enemyLuck = 0;
    for (s32 i = 4; i < 54; i++) {
        if ((entries[i].flags & 1) != 0 && (entries[i].flags & 0x40) == 0) {
            enemyCount++;
            enemyAgility += *(s16 *)((u8 *)&entries[i] + 0x1C2);
            enemyLuck += *(s16 *)((u8 *)&entries[i] + 0x1C4);
        }
    }
    s32 agilityGap = partyAgility / partyCount - enemyAgility / enemyCount;
    s32 luckGap = partyLuck / partyCount - enemyLuck / enemyCount;
    s32 surprise = 0;
    if (btlFindNthActiveSpecialEntry(state, 1) >= 0) {
        surprise = -50;
    }
    s32 chance = agilityGap + luckGap / 2 + state->difficulty * 10 + surprise + 50;
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
