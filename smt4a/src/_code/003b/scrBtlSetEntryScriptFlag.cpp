#include "shard/W5_W5Match7_BattleMask.h"

/* The battle message flag masks at 0x5710E0; only the script flag is named. */
struct BtlMessageMasks {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u64 scriptFlag;
};

extern "C" {

extern BtlMessageMasks g_btlMessageFlagMasks; /* 0x5710e0 */
s32 scrGetArg(s32 index);
BattleMaskEntry *FUN_003f0e20(BattleMaskState *battle, s32 id);

/* Script command: sets (argument 2 positive) or clears the script flag on the battle entry with the given id. */
u32 scrBtlSetEntryScriptFlag(void)
{
    s32 id = scrGetArg(0);
    s32 enable = scrGetArg(1);
    BattleMaskEntry *entry = FUN_003f0e20(btlGetMainState(), id);

    if (entry != NULL) {
        if (enable > 0) {
            entry->mask |= g_btlMessageFlagMasks.scriptFlag;
        } else {
            entry->mask &= ~g_btlMessageFlagMasks.scriptFlag;
        }
    }
    return 1;
}

} /* extern "C" */
