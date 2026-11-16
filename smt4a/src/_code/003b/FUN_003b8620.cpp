#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

struct CombatantFlagFilter {
    u8 unk00[0x30];
    u64 mask; // 0x30
};

extern "C" {
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
extern CombatantFlagFilter g_btlMessageFlagMasks;

// Return whether the requested combatant has any flags selected by the current filter.
u32 FUN_003b8620(void)
{
    u32 id = scrGetArg(0);
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), id);
    if (entry != NULL) {
        if (entry->flags & g_btlMessageFlagMasks.mask) {
            scrSetResult(1);
        } else {
            scrSetResult(0);
        }
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
