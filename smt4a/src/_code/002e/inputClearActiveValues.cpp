/* NON_MATCHING: armcc swaps r0 and r1 for the active flag and reset-buffer pointer. */
#include "shard/W5_W5Match2_InputResetState.h"

extern "C" {

extern InputResetState g_inputResetState;

/* Clear all values and the count while the input state is active. */
void inputClearActiveValues(void)
{
    if (g_inputResetState.active != 0) {
        for (u32 index = 0; index < 12; ++index) {
            g_inputResetState.values->values[index] = 0;
        }
        g_inputResetState.values->count = 0;
    }
}

}
