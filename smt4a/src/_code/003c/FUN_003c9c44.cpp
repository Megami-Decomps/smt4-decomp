/* NON_MATCHING: property index and found-state registers are swapped (r5/r6); all other instructions match. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlMainStateA *btlGetMainState();

// Report whether matching eligible units exist but none has a nonnegative selected property.
u32 FUN_003c9c44()
{
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 property = 0;
    if (kind == 0) {
        property = 7;
    } else if (kind == 1) {
        property = 8;
    } else if (kind == 2) {
        property = 10;
    } else if (kind == 3) {
        property = 11;
    }
    u8 found = 0;
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id) {
            // A word field cannot be inserted in the shared union beginning at unaligned +0x0a.
            struct PropertyView { u8 prefix[0x74]; s32 values[12]; };
            const PropertyView *properties = reinterpret_cast<const PropertyView *>(entry);
            found = 1;
            if (properties->values[property] > -1) {
                scrSetResult(0);
                return 1;
            }
        }
    }
    scrSetResult(found != 0);
    return 1;
}
}
