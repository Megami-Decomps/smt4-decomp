/* NON_MATCHING: the 64-bit masks are now real u64 fields (and/and/orrs pairs match, push shrinks to r4-r8); retail keeps the g_btlMain base in ip (loaded before the push) and loads the excluded mask with ldm where this build uses two ldr. */
#include "common.h"

namespace {

struct BattleEntryView {
    u64 flags;             // 0x000
    u8 unk08[0x400];       // 0x008
};

struct BattleSearchContextView {
    u8 unk00[0x1ffc];      // 0x0000
    BattleEntryView* entries; // 0x1ffc
};

struct BattleMainSearchView {
    u8 unk00[0x58];        // 0x00
    u64 requiredMask;      // 0x58
    u8 unk60[0x10];        // 0x60
    u64 anyMask;           // 0x70
    u8 unk78[8];           // 0x78
    u64 excludedMask;      // 0x80
};

}

extern "C" {
extern BattleMainSearchView g_btlMain;

// Find the first entry in slots 4 through 53 satisfying the three mask tests.
BattleEntryView* FUN_003e81bc(BattleSearchContextView* context)
{
    const BattleMainSearchView* main = &g_btlMain;
    BattleEntryView* entries = context->entries;
    u64 required = main->requiredMask;

    for (s32 index = 4; index < 54; ++index) {
        BattleEntryView* entry = &entries[index];
        u64 flags = entry->flags;

        if ((flags & required) != 0 &&
            (main->excludedMask & flags) == 0 &&
            (flags & main->anyMask) != 0) {
            return entry;
        }
    }
    return 0;
}
}
