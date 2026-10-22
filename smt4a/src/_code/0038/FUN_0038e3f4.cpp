/* NON_MATCHING: buffered entry flag addresses require different arithmetic and an extra literal load. */
#include "shard/W9_W9Match7_BufferedValueState.h"

/* Return the first ready entry's value, or the invalid sentinel. */
extern "C" u32 FUN_0038e3f4(const BufferedValueState *state)
{
    if (state->enabled) {
        for (s32 index = 0; index < state->count; ++index) {
            if (state->entries[index].ready) {
                return state->entries[index].primary;
            }
        }
    }
    return (u32)-1;
}
