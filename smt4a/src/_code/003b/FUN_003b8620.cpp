/* NON_MATCHING: 64-bit combatant flags are loaded with two ldr instructions instead of retail's ldm pair, changing mask registers and adding one instruction. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct CombatantFlagFilter {
    u8 unk00[0x30];
    u64 mask; // 0x30
};

extern "C" {
u32 scrGetArg(u32 index);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
void scrSetResult(s32 result);
extern CombatantFlagFilter g_btlMessageFlagMasks;

// Return whether the requested combatant has any flags selected by the current filter.
u32 FUN_003b8620(u32 argument)
{
    u32 id = scrGetArg(argument);
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), id);
    if (entry != NULL) {
        scrSetResult((entry->flags & g_btlMessageFlagMasks.mask) != 0);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
