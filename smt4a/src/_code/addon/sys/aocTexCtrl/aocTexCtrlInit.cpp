#include "addon/sys/aocTexCtrl.h"

#include "AsdSDK/AsdDebug.h"
#include "addon/AocSystem_Smt4a.h"

extern "C" {

void *asdMemoryAllocTracked(s32 heap, s32 align, s32 a, s32 size, s32 flag);
void aocTexRelocateTmxAndCreateNodes(AocTexCtrl *ctrl);

/* Allocates the controller's state block on first use and clears it. */
void aocTexCtrlInit(AocTexCtrl *ctrl)
{
    AocTexState *state;

    if (ctrl->state == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocTexCtrl.cpp", 876);
        state = (AocTexState *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x18, 1);
        ctrl->state = state;
        state->unk00 = 0;
        state->unk04 = 0;
        state->unk08 = 0;
        state->unk0C = 0;
        state->unk10 = 0;
        state->unk14 = 0;
        aocTexRelocateTmxAndCreateNodes(ctrl);
    }
}

} /* extern "C" */
