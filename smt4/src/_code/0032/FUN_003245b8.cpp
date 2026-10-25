/* NON_MATCHING: retail places the else computation out of line after the shared scrSetResult tail and does not fold the slot offset (0x3654) into one add */
#include "common.h"
#include "shard/scrGetArg.h"

struct ResultSlot {
    s8 unitId;        // 0x000
    u8 unk001[0x61F]; // 0x001
};

struct UnitRecordView {
    u8 unk00[0x34];   // 0x00
    u16 values[1];    // 0x34
};

struct ResultScreen {
    u8 unk0000[0x3654];       // 0x0000
    ResultSlot slots[25];     // 0x3654
    u32 slotCount;            // 0xCF74
    s32 selected;             // 0xCF78
    u8 unkCF7C[0xBC];         // 0xCF7C
    s32 valueIndex;           // 0xD038
    u32 pendingValue;         // 0xD03C
};

extern "C" {

extern ResultScreen *g_result;

void scrSetResult(u32 value);
UnitRecordView *gameGetUnitRecord(s32 unitId);

/* Script command (called with r0 = 0, which reaches scrGetArg unchanged): returns the pending result value (arg != 0) or the selected unit's value at the current index; 0 without a result screen. */
s32 FUN_003245b8(u32 argIndex)
{
    s32 which = scrGetArg(argIndex);

    if (g_result != NULL) {
        u32 value = which != 0 ? g_result->pendingValue
                               : gameGetUnitRecord(g_result->slots[g_result->selected].unitId)->values[g_result->valueIndex];

        scrSetResult(value);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
