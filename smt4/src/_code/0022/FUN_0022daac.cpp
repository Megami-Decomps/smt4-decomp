/* NON_MATCHING: Layout-context register saves, coordinate scheduling, and the alternate-zero block differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
UiLayoutEntryPrefixIV *FUN_002bf4f0(UiLayoutResourceIV *resource, u32 entryId);
u32 FUN_002bd06c(u32 value);
void FUN_002be56c(UiLayoutResourceIV *resource, u32 layer, u32 mask,
                  u32 convertedValue, f32 x, f32 y, f32 opacity,
                  f32 rotation, f32 scale);

void FUN_0022daac(void *owner, u32 value, u32 entryIndex,
                  s32 alternate, s32 fade)
{
    // RSB is a wrapping 32-bit subtraction before signed conversion to float.
    const f32 opacity = static_cast<f32>(
        static_cast<s32>(256U - static_cast<u32>(fade))) * (1.0f / 256.0f);
    UiLayoutResourceIV *resource = reinterpret_cast<UiLayoutResourceIV *>(
        static_cast<u8 *>(owner) + 0xC8);

    const UiLayoutEntryPrefixIV *entry;
    u32 anchorId;
    u32 layer;
    u32 mask;
    if (alternate != 0) {
        entry = FUN_002bf4f0(resource, entryIndex + 0x42FU);
        anchorId = 0x499;
        layer = 3;
        mask = 0xFFFFFFFFU;
    } else {
        entry = FUN_002bf4f0(resource, entryIndex + 0x40EU);
        anchorId = 0x48B;
        layer = 2;
        mask = 0xFF;
    }

    const s16 entryX = entry->x;
    const s16 entryY = entry->y;
    const u32 convertedValue = FUN_002bd06c(value & 0xFFFFU);
    const UiLayoutEntryPrefixIV *anchor = FUN_002bf4f0(resource, anchorId);
    FUN_002be56c(resource, layer, mask, convertedValue,
                 static_cast<f32>(static_cast<s32>(anchor->x) + entryX),
                 static_cast<f32>(static_cast<s32>(anchor->y) + entryY),
                 opacity, 0.0f, 1.0f);
}
}
