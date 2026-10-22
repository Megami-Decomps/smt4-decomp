/* NON_MATCHING: Retail ldr ip, [pc, #124] differs from recovered push {r4, r5, r6, r7, r8, r9, sl, fp}. */
#include "common.h"

namespace {

struct BattleEntryView {
    u32 unk00;             // 0x000
    u32 unk04;             // 0x004
    u8 unk08[0x400];       // 0x008
};

struct BattleSearchContextView {
    u8 unk00[0x1ffc];      // 0x0000
    BattleEntryView* entries; // 0x1ffc
};

struct BattleMainSearchView {
    u8 unk00[0x58];        // 0x00
    u32 unk58;             // 0x58
    u32 unk5c;             // 0x5c
    u8 unk60[0x10];        // 0x60
    u32 unk70;             // 0x70
    u32 unk74;             // 0x74
    u8 unk78[8];           // 0x78
    u32 unk80;             // 0x80
    u32 unk84;             // 0x84
};

}

extern "C" {
extern BattleMainSearchView g_btlMain;

// Find the first entry in slots 4 through 53 satisfying the three mask tests.
BattleEntryView* FUN_003e81bc(BattleSearchContextView* context)
{
    BattleEntryView* entries = context->entries;
    const u32 requiredLow = g_btlMain.unk58;
    const u32 requiredHigh = g_btlMain.unk5c;

    for (s32 index = 4; index < 54; ++index) {
        BattleEntryView* entry = &entries[index];
        const u32 low = entry->unk00;
        const u32 high = entry->unk04;

        if (((low & requiredLow) | (high & requiredHigh)) != 0 &&
            ((low & g_btlMain.unk80) | (high & g_btlMain.unk84)) == 0 &&
            ((low & g_btlMain.unk70) | (high & g_btlMain.unk74)) != 0) {
            return entry;
        }
    }
    return 0;
}
}
