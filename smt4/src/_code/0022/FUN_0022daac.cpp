/* NON_MATCHING: only the saved registers of the entry x/y (retail r8 = x, r9 = y; built the reverse) differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "addon/LookupRecord.h"

static __inline UiLayoutResourceIV *ownerResource(void *owner)
{
    return reinterpret_cast<UiLayoutResourceIV *>(static_cast<u8 *>(owner) + 0xC8);
}

extern "C" {
UiLayoutEntryPrefixIV *FUN_002bf4f0(UiLayoutResourceIV *resource, u32 entryId);
void drawTextAtSnappedRectangle(UiLayoutResourceIV *resource, f32 x, f32 y,
                  u32 layer, u32 mask, u32 convertedValue, f32 opacity,
                  f32 rotation, f32 scale);

void FUN_0022daac(void *owner, u32 value, u32 entryIndex,
                  s32 alternate, s32 fade)
{
    // RSB is a wrapping 32-bit subtraction before signed conversion to float.
    const f32 opacity = static_cast<f32>(
        static_cast<s32>(256U - static_cast<u32>(fade))) * (1.0f / 256.0f);

    const UiLayoutEntryPrefixIV *entry;
    u32 anchorId;
    u32 layer;
    u32 mask;
    if (!(alternate != 0)) {
        entry = FUN_002bf4f0(ownerResource(owner), entryIndex + 0x40EU);
        anchorId = 0x48B;
        layer = 2;
        mask = 0xFF;
    } else {
        entry = FUN_002bf4f0(ownerResource(owner), entryIndex + 0x42FU);
        anchorId = 0x499;
        layer = 3;
        mask = 0xFFFFFFFFU;
    }

    const s16 entryX = entry->x;
    const s16 entryY = entry->y;
    const u32 convertedValue = (u32)dataTable01FindByIdWithAoc(value & 0xFFFFU);
    const UiLayoutEntryPrefixIV *anchor = FUN_002bf4f0(ownerResource(owner), anchorId);
    const s32 x = anchor->x + entryX;
    const s32 y = anchor->y + entryY;
    drawTextAtSnappedRectangle(ownerResource(owner), static_cast<f32>(x), static_cast<f32>(y), layer,
                 mask, convertedValue,
                 opacity, 0.0f, 1.0f);
}
}
