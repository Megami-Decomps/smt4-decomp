#include "battle/BtlMainAccess.h"
#include "common.h"

namespace {

struct BattleEntryView {
    u32 flags;                         // 0x00
    u8 unk04[0x6E];                    // 0x04
    s16 unk72[12];                     // 0x72
    u8 unk8A[0x1FE];                   // 0x8A
};

struct BattleMainStateView {
    u8 unk00[0x1FC0];                  // 0x0000
    BattleEntryView* unk1FC0;          // 0x1FC0
};

}

extern "C" {
s32 scrGetArg(u32 index);
s32 scrSetResult(s32 result);

// Report whether an eligible battle entry has a selected value of -1 or less.
u32 FUN_003180e0(void)
{
    s32 selector = scrGetArg(0);
    s32 fieldIndex = 0;
    if (selector == 0) {
        fieldIndex = 7;
    } else if (selector == 1) {
        fieldIndex = 10;
    } else if (selector == 2) {
        fieldIndex = 11;
    }

    for (s32 entryIndex = 0; entryIndex < 109; ++entryIndex) {
        BattleEntryView* entry = &reinterpret_cast<BattleMainStateView *>(btlGetMainState())->unk1FC0[entryIndex];
        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 &&
            (entry->flags & 0x40) == 0 && entry->unk72[fieldIndex] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }

    scrSetResult(0);
    return 1;
}
}
