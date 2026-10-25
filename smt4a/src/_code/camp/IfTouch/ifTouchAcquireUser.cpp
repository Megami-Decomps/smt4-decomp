#include "ui/IfTouch.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 track);
void sysMemClear(void *memory, u32 size);
void FUN_0013c2c8();
void FUN_0013ed24();

// Acquire the touch subsystem, lazily allocating and starting its shared calculation state.
void ifTouchAcquireUser()
{
    if (g_ifTouch.userCount <= 0) {
        if (g_ifTouch.state == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\IfTouch.cpp", 364);
            g_ifTouch.state = (IfTouchState *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(IfTouchState), 1);
        }
        IfTouchState *state = g_ifTouch.state;
        sysMemClear(state, sizeof(IfTouchState));
        state->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TOUCH CALC"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0013c2c8), reinterpret_cast<AsdProcFunc>(FUN_0013ed24), 0);
        state->selectedRegion = -1;
        state->regionCount = 10;
        state->timer = 0;
    }
    ++g_ifTouch.userCount;
}
}
