/* NON_MATCHING: only the stack layout differs: retail's local buffer block starts at sp+8 (frame 1044 bytes), the build's at sp+4 */
#include "common.h"

extern "C" {

typedef struct SaveView003eaa14 {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ u8 slotData[680];
} SaveView003eaa14;

s32 saveSlotFindSelected(void);
void FUN_003ecfb4(u32 target, u8 slotData[680], s32 slot, s32 flags);
void FUN_004ca63c(u32 target, u8 slotData[680], s32 a, s32 b, s32 c);

/* Loads the selected save slot's data and applies it to the target. */
void saveSlotApplySelected(u32 target)
{
    SaveView003eaa14 view;
    s32 slot = saveSlotFindSelected();

    if (slot != 0) {
        FUN_003ecfb4(target, view.slotData, slot, 0);
        FUN_004ca63c(target, view.slotData, 2, 0x36, 0);
    }
}

} /* extern "C" */
