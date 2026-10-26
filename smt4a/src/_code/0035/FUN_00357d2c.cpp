/* NON_MATCHING: candidate/request registers differ, and the alternate-search return adds a branch-to-next NOP. */
#include "common.h"
#include "ui/MessageMain.h"
#include "code/Code003e.h"
#include "code/Code0018.h"

struct SaveSlotView {
    u8 unk00[0x12c];
    u16 unk12C; // 0x12c
};

extern "C" {
u32 scrGetArg(u32 index);
SaveSlotView* saveSlotFindSelected(void);
SaveSlotView* FUN_003e4d68(u16 index);

static __inline s32 findEligibleAlternate(u32 requestedValue)
{
    for (s32 index = 0; index < 12; ++index) {
        SaveSlotView *candidate = FUN_003e4d68((u16)index);
        if (candidate->unk12C != requestedValue && FUN_00187168(candidate) != 0)
            return candidate->unk12C;
    }
    return 0;
}

// Select an eligible alternate before processing the currently selected value.
u32 FUN_00357d2c(void)
{
    const u32 requestedValue = scrGetArg(0);
    SaveSlotView* selectedSlot = saveSlotFindSelected();

    if (selectedSlot != 0 && selectedSlot->unk12C == requestedValue) {
        FUN_003e4e4c(findEligibleAlternate(requestedValue));
    }

    FUN_003e48dc((u16)requestedValue);
    return 1;
}
}
