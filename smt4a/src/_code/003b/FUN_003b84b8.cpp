/* NON_MATCHING: retail retains an unused pool word 0x0057113c after the function return; adding dead data to reproduce it is not allowed. */
#include "shard/W5_W5Match7_ScriptUnit.h"

struct UnitFlagMasks {
    u8 unk00[0x38]; // 0x00
    u64 masks[3];   // 0x38
};

extern "C" {
extern UnitFlagMasks g_btlCandidateMasks;

// Adds all three preset masks to the referenced script unit's leading flag word.
u32 FUN_003b84b8(const u32* unitId)
{
    ScriptUnit* unit = btlUnitGet(*unitId);
    // The opaque entry's first eight bytes are its combined flags.
    u64& flags = *reinterpret_cast<u64*>(unit->entryView.entry);
    flags |= g_btlCandidateMasks.masks[0] | g_btlCandidateMasks.masks[1] | g_btlCandidateMasks.masks[2];
    return 1;
}
}
