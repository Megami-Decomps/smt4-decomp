#include "status/StatusDown.h"
#include "shard/GameGlobals.h"

extern "C" {
void *rt_memcpy(void *, const void *, u32);

// Replace up to eight status-screen IDs, or disable the list for a negative count.
void FUN_0026a978(const u32 *ids, s32 count)
{
    if (count <= 8) {
        StatusDownState *state = g_statusDown;
        for (s32 i = 0; i < 4; i++) {
            state->selectedWords.words[i] = 0;
        }
        if (count >= 0) {
            state->enabled = 1;
            rt_memcpy(&state->selectedWords, ids, count * sizeof(u16));
        } else {
            state->enabled = 0;
        }
    }
}
}
