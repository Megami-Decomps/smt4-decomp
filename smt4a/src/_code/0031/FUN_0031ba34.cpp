/* NON_MATCHING: Mode-byte saves and coordinate/slot store scheduling differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
/* The callback is passed through, not called by this function. */
void FUN_002c17dc();
void *taskCreate(void (*entry)(), u32, u32, u32, u32,
                 u32 workSize, u32 priority, u32, u32);
void sysMemClear(void *memory, u32 size);
u32 FUN_00389b58(u32 selector);

SpatialTaskWorkA *FUN_0031ba34(u32 selector, u32 *activeFlag,
                              u8 mode, u8 option,
                              f32 x, f32 y, f32 z, f32 initialValue)
{
    SpatialTaskWorkA *state = static_cast<SpatialTaskWorkA *>(
        taskCreate(FUN_002c17dc, 0, 0, 0, 0, 0x168, 3, 0, 0));
    if (state != 0) {
        sysMemClear(state, 0x168);
        state->resolvedValue = FUN_00389b58(selector);
        state->activeFlag = activeFlag;
        if (activeFlag != 0) {
            *activeFlag = 1;
        }
        state->x = x;
        state->y = y;
        state->z = z;
        state->selectorByte = static_cast<u8>(selector);
        state->mode = mode;
        state->option = option;
        state->initialValue = initialValue;
        state->currentValue = initialValue;
        state->slotA = 0xffffffffu;
        state->slotB = 0xffffffffu;
    }
    return state;
}
}
