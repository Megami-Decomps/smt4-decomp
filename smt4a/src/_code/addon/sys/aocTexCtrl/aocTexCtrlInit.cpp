/* NON_MATCHING: retail loads a file name string and a line number (876) into r0/r1 before the allocation call (the call itself is a nop in the retail image). */
#include "addon/sys/aocTexCtrl.h"

extern "C" {

void *asdMemoryAllocTracked(s32 heap, s32 align, s32 a, s32 size, s32 flag);
void FUN_0047cb0c(AocTexCtrl *ctrl);

/* Allocates the controller's state block on first use and clears it. */
void aocTexCtrlInit(AocTexCtrl *ctrl)
{
    AocTexState *state;

    if (ctrl->state == NULL) {
        state = (AocTexState *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x18, 1);
        ctrl->state = state;
        state->unk00 = 0;
        state->unk04 = 0;
        state->unk08 = 0;
        state->unk0C = 0;
        state->unk10 = 0;
        state->unk14 = 0;
        FUN_0047cb0c(ctrl);
    }
}

} /* extern "C" */
