/* NON_MATCHING: conditional preset addressing now matches; incoming arguments, first ring pointer, and value use different saved registers. */
#include "gfx/AsdGxPresetRing.h"

extern "C" {
void asdGfxSetMode(s32 mode);
void FUN_002c2620(u32 value);
void FUN_002bc1e4(void);
void FUN_002bc120(AsdGxDisplayBuffers* ring, s32 enabled);
void FUN_001235b8(s32 mode);

// Submit the previous presets, optionally refresh them, then advance each ring.
void FUN_0010ec90(s32 refresh, s32 secondaryEnabled)
{
    AsdGxDisplayBuffers* primary = &g_asdGxPresets.displays[0];
    AsdGxDisplayBuffers* secondaryPreset = &g_asdGxPresets.displays[1];
    AsdGxDisplayBuffers* output = &g_asdGxPresets.displays[2];
    u32 value = primary->buffers[asdGxPresetPrevious(primary)];
    asdGfxSetMode(0x400);
    FUN_002c2620(value);
    u32 previous = asdGxPresetPrevious(secondaryPreset);
    value = secondaryEnabled ? secondaryPreset->buffers[previous] : primary->buffers[previous];
    asdGfxSetMode(0x410);
    FUN_002c2620(value);
    value = output->buffers[asdGxPresetPrevious(output)];
    asdGfxSetMode(0x401);
    FUN_002c2620(value);
    if (refresh) {
        FUN_002bc1e4();
        FUN_002bc120(primary, 1);
        FUN_002bc120(secondaryPreset, secondaryEnabled);
        FUN_002bc120(output, 1);
    }
    FUN_001235b8(0x402);
    primary->index = (primary->index + 1) % primary->count;
    secondaryPreset->index = (secondaryPreset->index + 1) % secondaryPreset->count;
    output->index = (output->index + 1) % output->count;
}
}
