/* NON_MATCHING: retail 50 vs built 51 rows; resource-estimate count and VFP conversion register allocation differ. */
#include "common.h"

extern "C" {
u32 FUN_001242e2(const void *);
u32 FUN_001244fc(u32);
s32 FUN_001242f0(u32);
void *FUN_002ef01c(u32);
u32 FUN_00123bd2(const void *);
f32 FUN_005022b0(void *, u32, const void *);

u32 FUN_0043222c(void *owner, u32 parameter)
{
    struct ResourceEstimateOwnerView {
        u32 unk00;
        u32 id;
        u8 unk08[0xBC];
        u8 storedCount[1];
    };
    struct ResourceEstimateLimitView {
        u8 unk00[0x98];
        u32 limit;
    };
    // The override callback is beyond the shared flag-block prefix.
    struct ResourceEstimateOverrideView {
        u8 unk000[0x15C];
        u32 (*callback)(u32 count, u32 kind);
    };
    extern ResourceEstimateOverrideView g_flagBlock;
    ResourceEstimateOwnerView *state = static_cast<ResourceEstimateOwnerView *>(owner);
    const ResourceEstimateLimitView *resource =
        static_cast<const ResourceEstimateLimitView *>(FUN_002ef01c(state->id));
    if (g_flagBlock.callback != NULL) {
        u32 kind = FUN_001244fc(parameter);
        u32 count = FUN_001242e2(state->storedCount);
        return g_flagBlock.callback(count, kind);
    }
    u32 count;
    if (FUN_001242f0(parameter))
        count = FUN_001242e2(state->storedCount);
    else
        count = FUN_00123bd2(resource);
    u32 base = FUN_001244fc(parameter) * count;
    f32 factor = FUN_005022b0(owner, FUN_001244fc(parameter), resource);
    u32 estimate = static_cast<u32>(static_cast<f32>(base) * factor);
    if (resource->limit < estimate)
        estimate = resource->limit;
    return estimate;
}
}
