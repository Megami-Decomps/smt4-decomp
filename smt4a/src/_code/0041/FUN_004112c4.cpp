/* NON_MATCHING: retail knows the stage-mode query preserves s0/s1; separate-unit declaration forces a saved VFP pair and changes epilogue factoring. */
#include "battle/btlMain.h"
#include "battle/btlUI.h"
#include <stddef.h>

namespace {
struct EntryStartupStep {
    u8 unk00[8];
    u32 state;
    u32 frames;
    s32 phase;
};
struct StageHeightRecord { u8 unk00[0x18]; f32 height; };
typedef char EntryStartupStepOffsets[offsetof(EntryStartupStep, state) == 8 &&
    offsetof(EntryStartupStep, phase) == 0x10 && sizeof(StageHeightRecord) == 0x1C ? 1 : -1];
}
extern "C" {
extern BtlAuxA *g_btlAux;
extern BtlUiA *g_btlUiBlock;
extern StageHeightRecord DAT_00529780[];
s32 FUN_0013def0(u32 slot);
s32 FUN_00163e84(u32 slot);
s32 btlStageGetModeIndex(EntryStartupStep *step);
void FUN_004f5238(BtlAuxA *context, u32 first, u32 second, u32 kind,
                  u32 enabled, u32 mode, u32 flags, u32 active, u32 extra, f32 x, f32 y);
void FUN_004a9d1c(BtlUiA *ui);
s32 dialogIsActive(void);
void dialogClose(s32 mode);
s32 btlUiIsIdleB(BtlUiA *ui);
void slotSetRequest(s32 slot, s32 mode, s32 value);
void FUN_004f8f08(BtlAuxA *context);
BtlMainStateA *btlGetMainState(void);
void partyModelSlotsLoad(BtlMainStateA *battle);
s32 btlStartEntries(BtlMainStateA *battle);

// Close the battle overlay, request the next slot, then load and start the party entries.
void FUN_004112c4(EntryStartupStep *step)
{
    switch (step->phase) {
    case 0:
        if (FUN_0013def0(0) == 3) {
            f32 height = 0.0f;
            s32 index = btlStageGetModeIndex(step);
            if (index >= 0)
                height = DAT_00529780[index].height;
            FUN_004f5238(g_btlAux, 0, 0, 9, 0, 6, 0, 1, 0, 0.0f, height);
            FUN_004a9d1c(g_btlUiBlock);
            if (dialogIsActive())
                dialogClose(1);
            ++step->phase;
        }
        break;
    case 1:
        if (btlUiIsIdleB(g_btlUiBlock) && (!dialogIsActive() || step->frames >= 55)) {
            slotSetRequest(0, 10, 255);
            ++step->phase;
        }
        break;
    case 2:
        if (FUN_00163e84(0)) {
            FUN_004f8f08(g_btlAux);
            partyModelSlotsLoad(btlGetMainState());
            ++step->phase;
        }
        break;
    case 3:
        if (btlStartEntries(btlGetMainState()))
            step->state = 3;
        break;
    }
}
}
