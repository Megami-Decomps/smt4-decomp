/* NON_MATCHING: entry (mov r0,#0), slot-pointer arithmetic and arm placement now match retail; armcc still emits three compiler nop hints around the shared scrSetResult call and a different tail layout. */
#include "common.h"
#include "script/ScriptArgs.h"
#include "gamedata/UnitRecordAccess.h"

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


/* Script command: returns the pending result value (arg != 0) or the selected unit's value at the current index; 0 without a result screen. */
s32 FUN_003245b8(void)
{
    s32 which = scrGetArg(0);

    if (g_result != NULL) {
        u32 value;
        if (which == 0) {
            ResultSlot *slot = &g_result->slots[g_result->selected];
            value = static_cast<UnitRecordView *>(gameGetUnitRecord(slot->unitId))->values[g_result->valueIndex];
        } else {
            value = g_result->pendingValue;
        }

        scrSetResult(value);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
