/* NON_MATCHING: fallback multiplication is merged and allocation size is rematerialized instead of retained. */
#include "shard/WeightedValueState.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00544ca0[];
void *memAlloc(u32 heap, u32 alignment, u32 kind, u32 bytes, u32 category, u32 flags);
void rt_memclr(void *allocation, u32 bytes);

// Allocate an active value controller using the configured product, capped at one hundred.
WeightedValueState *FUN_003a1ef4(const WeightedValueConfig *config)
{
    s32 base = config->value;
    if (base == 0)
        base = config->fallbackValue;
    u32 value = static_cast<u32>(base * config->multiplier);
    if (value > 100)
        value = 100;
    asdDebugTrace(DAT_00544ca0, 450);
    WeightedValueState *state = static_cast<WeightedValueState *>(
        memAlloc(0x10000, 0x100, 0, sizeof(WeightedValueState), 0x10, 1));
    rt_memclr(state, sizeof(WeightedValueState));
    state->target = -1;
    state->value = value;
    state->scale = 1.0f;
    state->active = 1;
    return state;
}
}
