#include "status/StatusDown.h"
#include "shard/GameGlobals.h"

extern "C" {
void *__aeabi_memcpy(void *, const void *, u32); // declcheck: local (the shared declaration does not compile here or changes this unit)

// Replace up to eight status-screen IDs, or disable the list for a negative count.
void statusDownSetSelectedIds(const u32 *ids, s32 count)
{
    if (count <= 8) {
        StatusDownState *state = g_statusDown;
        for (s32 i = 0; i < 4; i++) {
            state->selectedWords.words[i] = 0;
        }
        if (count >= 0) {
            state->enabled = 1;
            __aeabi_memcpy(&state->selectedWords, ids, count * sizeof(u16));
        } else {
            state->enabled = 0;
        }
    }
}
}
