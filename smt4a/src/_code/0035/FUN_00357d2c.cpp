/* NON_MATCHING: Retail push {r4, r5, r6, lr} differs from recovered push {r4, r5, r6, r7, r8, lr}. */
#include "common.h"

struct SaveSlotView {
    u8 unk00[0x12c];
    u16 unk12C; // 0x12c
};

extern "C" {
u32 scrGetArg(u32 index);
SaveSlotView* saveSlotFindSelected(void);
SaveSlotView* FUN_003e4d68(u16 index);
s32 FUN_00187168(SaveSlotView* slot);
s32 FUN_003e4e4c(s32 value);
void FUN_003e48dc(u16 value);

// Select an eligible alternate before processing the currently selected value.
u32 FUN_00357d2c(void)
{
    const u32 requestedValue = scrGetArg(0);
    SaveSlotView* selectedSlot = saveSlotFindSelected();

    if (selectedSlot != 0 && selectedSlot->unk12C == requestedValue) {
        u16 replacementValue;
        s32 index;
        for (index = 0; index < 12; ++index) {
            SaveSlotView* candidate = FUN_003e4d68((u16)index);
            if (candidate->unk12C != requestedValue && FUN_00187168(candidate) != 0) {
                replacementValue = candidate->unk12C;
                break;
            }
        }
        if (index == 12) {
            replacementValue = 0;
        }
        FUN_003e4e4c(replacementValue);
    }

    FUN_003e48dc((u16)requestedValue);
    return 1;
}
}
