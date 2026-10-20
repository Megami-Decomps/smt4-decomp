/* NON_MATCHING: register allocation only (retail keeps the value in r4, the index in r5 and the block in r6, and loads the early-return zero before the compare). */
#include "common.h"
#include "shard/S3GxState.h"

extern "C" {

void nn_os_CriticalSection_Enter(void *cs);
void nn_os_CriticalSection_Leave(void *cs);

extern GxSlotState g_nngxState;

/* Stores `value` in slot `index` (< 7) under the lock and returns the value it replaces; 0 for a
 * bad index. */
u32 FUN_001702fc(u32 value, u32 index)
{
    GxSlotBlock *block = g_nngxState.slots;

    if (index >= GX_SLOT_COUNT) {
        return 0;
    }
    nn_os_CriticalSection_Enter(block);
    u32 previous = block->slot[index];
    block->slot[index] = value;
    nn_os_CriticalSection_Leave(block);
    return previous;
}

} /* extern "C" */
