/* NON_MATCHING: retail expands four survivor tests; default compiler retains a loop and changes flag-mask addressing/saved registers (107/70). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

typedef char BattleSurvivalSuppressOffsetCheck[
    offsetof(BtlMainGlobalsA, suppressDefeat) == 0x1C8 ? 1 : -1];

extern "C" {
extern BtlMainGlobalsA g_btlMain;
u8 gameDataBlocksGetTableFlag();
u8 gameDataFlagTestBit(u32 flag);
}

extern "C" bool battlePartyIsDefeated(const BtlMainStateA *state)
{
    u64 stateFlags = state->stateFlags.words[0] |
                     (static_cast<u64>(state->stateFlags.words[1]) << 32);
    if ((stateFlags & g_btlMain.suppressDefeat) != 0)
        return false;

    bool defeated = true;
    for (s32 i = 0; i < 4; ++i) {
        const BtlCombatantEntryA &entry = state->entries[i];
        if ((entry.flags & g_btlMain.combatantMasks.required) != 0 &&
            (entry.flags & g_btlMain.exclusionMask) == 0 && entry.hp > 0) {
            defeated = false;
            break;
        }
    }

    if (gameDataBlocksGetTableFlag() == 4 || gameDataFlagTestBit(0x80) != 0) {
        u64 leaderFlags = state->entries[0].flags;
        if ((leaderFlags & g_btlMain.combatantMasks.required) == 0)
            defeated = true;
        if ((leaderFlags & g_btlMain.exclusionMask) != 0)
            defeated = true;
    }
    return defeated;
}
