/* NON_MATCHING: 129 lines (107 vs 66 rows): single-return control flow and stateFlags64.bits match; retail unrolls the four survivor tests while reloading exclusionMask per slot. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

typedef char BattleSurvivalSuppressOffsetCheck[
    offsetof(BtlMainGlobalsA, suppressDefeat) == 0x1C8 ? 1 : -1];

extern "C" {
u8 gameDataBlocksGetTableFlag();
u8 gameDataFlagTestBit(u32 flag);
}

extern "C" bool battlePartyIsDefeated(const BtlMainStateA *state)
{
    bool defeated = true;
    if ((g_btlMain.suppressDefeat & state->stateFlags64.bits) != 0) {
        defeated = false;
    } else {
        for (s32 i = 0; i < 4; ++i) {
            const BtlCombatantEntryA *entry = &state->entries[i];
            if ((entry->flags & g_btlMain.combatantMasks.required) != 0 &&
                (entry->flags & g_btlMain.exclusionMask) == 0 && entry->data.hp > 0) {
                defeated = false;
                break;
            }
        }
        if (gameDataBlocksGetTableFlag() == 4 || gameDataFlagTestBit(0x80) != 0) {
            if ((g_btlMain.combatantMasks.required & state->entries[0].flags) == 0)
                defeated = true;
            if ((g_btlMain.exclusionMask & state->entries[0].flags) != 0)
                defeated = true;
        }
    }
    return defeated;
}
