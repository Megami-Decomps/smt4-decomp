/* NON_MATCHING: only the clearing loop's registers differ (retail keeps the count in r2, the pair counter in r0 and the index in r1; ours rotates them). */
#include "shard/W9_W9Match7_BufferedValueState.h"


// Mark buffered entries selected by the target mask and record whether multiple entries match.
extern "C" void FUN_0038e588(BufferedValueState *state, u32, u64 targets)
{
    for (s32 index = 0; index < state->count; ++index)
        state->entries[index].ready = 0;
    s32 selected = 0;
    for (s32 target = 0; target < state->count; ++target) {
        if (((1ULL << target) & targets) != 0) {
            for (s32 index = 0; index < state->count; ++index) {
                if (state->entries[index].primary == target) {
                    ++selected;
                    state->entries[index].ready = 1;
                }
            }
        }
    }
    if (selected > 1) {
        state->unk4854 = 1;
        return;
    }
    state->unk4854 = 0;
}
