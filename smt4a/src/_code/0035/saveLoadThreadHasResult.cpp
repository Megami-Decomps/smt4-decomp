#include "common.h"

extern "C" {

struct ThreadState { u8 unk00[0x58]; s32 result; u8 active; };
struct ThreadOwner { u32 unk00[2]; ThreadState *state; };
extern ThreadOwner g_saveLoadThread;

s32 saveLoadThreadHasResult(void)
{
    ThreadState *state = g_saveLoadThread.state;
    if (state == NULL) {
        return 0;
    }
    return state->active != 0 || state->result != -1;
}

} /* extern "C" */
