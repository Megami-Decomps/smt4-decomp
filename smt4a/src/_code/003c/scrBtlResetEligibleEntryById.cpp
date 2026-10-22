#include "shard/W5_W5Match7_BattleMask.h"

/* The 0x408-byte combatant entry as this script command sees it. */
struct ScriptResetEntry {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x154];
    /* 0x15C */ s32 unk15c;
    /* 0x160 */ u8 unk160[6];
    /* 0x166 */ u16 id;
    /* 0x168 */ u8 unk168[0x2a0];
};

typedef char ScriptResetEntrySizeCheck[sizeof(ScriptResetEntry) == 0x408 ? 1 : -1];

extern "C" {

s32 scrGetArg(u32 index);

/* Clear field 0x15C of every eligible combatant whose id matches the script argument. */
u32 scrBtlResetEligibleEntryById(void)
{
    s32 id = scrGetArg(0);
    BattleMaskState *battle = btlGetMainState();
    u64 excluded = g_battleMaskPresets.eligibility.excluded;
    u64 required = g_battleMaskPresets.eligibility.required;
    u64 active = g_battleMaskPresets.eligibility.active;
    for (s32 index = 4; index < 54; ++index) {
        ScriptResetEntry *entry = &reinterpret_cast<ScriptResetEntry *>(battle->entryMaskView.mask)[index];
        u64 flags = entry->flags;
        if ((flags & active) != 0 && (flags & excluded) == 0 && (flags & required) != 0 &&
            entry->id == id) {
            entry->unk15c = 0;
        }
    }
    return 1;
}

} /* extern "C" */
