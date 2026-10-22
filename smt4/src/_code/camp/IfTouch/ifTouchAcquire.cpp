#include "ui/IfTouch.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 kind);
void memClear(void *buffer, u32 size);
u32 asdProcessCreateSimple(const char *name, s32 priority, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc end, u32 parent);
s32 FUN_00107d28(u32 process);
void FUN_0010a2f4(u32 process);

// Acquire the shared touch interface, creating its calculation job for the first user.
void ifTouchAcquire(void)
{
    if (g_ifTouch.userCount <= 0) {
        if (g_ifTouch.state == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\IfTouch.cpp", 364);
            g_ifTouch.state = (IfTouchState *)asdMemAlloc(0x100, 0x100, 0,
                                                         sizeof(IfTouchState), 1);
        }
        IfTouchState *state = g_ifTouch.state;
        memClear(state, sizeof(IfTouchState));
        state->process = asdProcessCreateSimple("TOUCH CALC", 1, 0, 0,
                                               FUN_00107d28, FUN_0010a2f4, 0);
        state->selectedRegion = -1;
        state->regionCount = 10;
        state->timer = 0;
    }
    ++g_ifTouch.userCount;
}
}
