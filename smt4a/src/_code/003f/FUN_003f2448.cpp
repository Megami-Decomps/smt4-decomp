/* NON_MATCHING: retail normalizes the comparison with two conditional MOVs; compiled code shares an unconditional zero return via an extra branch. */
#include "shard/W5_W5Match7_ScriptUnit.h"

struct ScriptEntryInfo {
    u8 unk000[0x12c]; // 0x000
    u16 id;           // 0x12c
};
struct ScriptUnitEntry {
    u8 unk000[0x400]; // 0x000
    ScriptEntryInfo* info; // 0x400
};

extern "C" {
s32 FUN_0019acdc(u16 id, u32 flags);

// Tests whether the active script unit's record is in category two.
bool FUN_003f2448(void)
{
    ScriptUnit* unit = btlUnitGet(g_btlScriptUnit);
    if (unit == NULL || unit->entryView.entry == NULL) {
        return 0;
    }
    ScriptEntryInfo* info = unit->entryView.entry->info;
    if (info == NULL) {
        return 0;
    }
    return FUN_0019acdc(info->id, 0) == 2;
}
}
