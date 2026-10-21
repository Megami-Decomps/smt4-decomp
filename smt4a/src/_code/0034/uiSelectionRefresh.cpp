/* NON_MATCHING: retail uses `push {r4, lr}` where armcc emits `b 0  [R_ARM_JUMP24 FUN_00379434]`. */
#include "common.h"

extern "C" {

struct SelectionState {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s16 selection;
    /* 0x5a */ s16 previous;
};
extern SelectionState DAT_005f17fc;
void FUN_00379434(SelectionState *state);

void uiSelectionRefresh(void)
{
    if (DAT_005f17fc.selection != DAT_005f17fc.previous) {
        DAT_005f17fc.previous = DAT_005f17fc.selection;
    }
    FUN_00379434(&DAT_005f17fc);
}

} /* extern "C" */
