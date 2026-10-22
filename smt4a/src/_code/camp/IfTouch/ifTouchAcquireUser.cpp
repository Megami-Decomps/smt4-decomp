#include "ui/IfTouch.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 track);
void sysMemClear(void *memory, u32 size);
u32 asdProcessCreateSimple(const char *name, u32 priority, u32 workSize, u32 flags, void (*update)(), void (*destroy)(), u32 argument);
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
        state->process = asdProcessCreateSimple("TOUCH CALC", 3, 0, 0, FUN_0013c2c8, FUN_0013ed24, 0);
        state->selectedRegion = -1;
        state->regionCount = 10;
        state->timer = 0;
    }
    ++g_ifTouch.userCount;
}
}
