#include "shard/W5_W5Match1_RecordKeys.h"
#include "code/Code0028_Smt4a.h"

extern "C" {

extern void sysMemClear(void *memory, u32 size);

/* Clears the render record and restores its default format, mask and mode. */
s32 FUN_00281024(RenderInitialState *state)
{
    sysMemClear(state, sizeof(RenderInitialState));
    state->next = 0;
    state->format = 0xDE1;
    state->mode = 2;
    state->flags = 0x10000;
    state->count = 0;
    return 0;
}

} /* extern "C" */
