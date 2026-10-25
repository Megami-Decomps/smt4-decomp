/* NON_MATCHING: compiler folds the preset field address into the pool and combines its two mask loads. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "util/CalleeContracts.h"

struct BtlCombatantEntryA {
    u32 flags[2]; // 0x00
};

struct BattleClearPreset {
    u8 unk00[0x28]; // 0x00
    u32 clearMask[2]; // 0x28
};

extern "C" {
extern BattleClearPreset g_battleMaskPresets;
extern void* g_btlUiBlock;

// Clear the configured combatant flags and reset the battle UI mode.
u32 FUN_003c25d0()
{
    BtlCombatantEntryA* entry = btlGetMainState()->entries;
    u32 lowMask = ~g_battleMaskPresets.clearMask[0];
    entry->flags[1] &= ~g_battleMaskPresets.clearMask[1];
    entry->flags[0] &= lowMask;
    FUN_004ab7f4(g_btlUiBlock, 0);
    return 1;
}
}
