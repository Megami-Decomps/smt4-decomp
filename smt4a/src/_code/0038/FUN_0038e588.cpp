/* NON_MATCHING: clear-loop registers and selected-entry scan trip-count handling differ. */
#include "shard/W9_W9Match7_BufferedValueState.h"

extern "C" u64 runtimeShiftLeftWide(u64 value, s32 shift);

// Mark buffered entries selected by the target mask and record whether multiple entries match.
extern "C" void FUN_0038e588(BufferedValueState *state, u32, u64 targets)
{
    for (s32 index = 0; index < state->count; ++index)
        state->entries[index].ready = 0;
    s32 selected = 0;
    for (s32 target = 0; target < state->count; ++target) {
        if ((runtimeShiftLeftWide(1, target) & targets) != 0) {
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
