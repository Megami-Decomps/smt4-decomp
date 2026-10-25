/* NON_MATCHING: resource fallback comparison matches; suppression-mask scalar versus paired loads still differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

// Report whether an eligible combatant has a positive primary or fallback resource.
u32 FUN_003bba04(void)
{
    // Word fields cannot be added to the shared entry's halfword-aligned union.
    struct ResourceEntry {
        /* 0x000 */ u64 flags;
        /* 0x008 */ u8 unk008[0xA4];
        /* 0x0AC */ s32 primary;
        /* 0x0B0 */ u8 unk0B0[4];
        /* 0x0B4 */ s32 fallback;
        /* 0x0B8 */ u8 unk0B8[0x350];
    };
    for (s32 i = 0; i < 0x6D; ++i) {
        BtlMainStateA* battle = btlGetMainState();
        ResourceEntry* entry = reinterpret_cast<ResourceEntry*>(battle->entries) + i;
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0) {
            s32 resource = entry->primary;
            if (resource <= 0) {
                resource = entry->fallback;
            }
            if (resource > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
