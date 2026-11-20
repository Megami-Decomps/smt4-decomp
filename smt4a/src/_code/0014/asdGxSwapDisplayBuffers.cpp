/* NON_MATCHING: ring pointer/register allocation and secondary-ring selection instructions differ. */
#include "gfx/AsdGxPresetRing.h"

extern "C" {
void asdGfxSetMode(s32 mode);
void asdGfxBindTarget(u32 value);
void asdGxCmdBufferFinalizeBlock(void);
void FUN_00154ca4(AsdGxDisplayBuffers* ring, s32 enabled);
void FUN_00161694(s32 mode);

// Submit the previous presets, optionally refresh them, then advance each ring.
void asdGxSwapDisplayBuffers(s32 refresh, s32 secondaryEnabled)
{
    AsdGxDisplayBuffers* primary = &g_asdGxPresets.displays[0];
    AsdGxDisplayBuffers* secondaryPreset = &g_asdGxPresets.displays[1];
    AsdGxDisplayBuffers* output = &g_asdGxPresets.displays[2];
    u32 value = primary->buffers[asdGxPresetPrevious(primary)];
    asdGfxSetMode(0x400);
    asdGfxBindTarget(value);
    u32 previous = asdGxPresetPrevious(secondaryPreset);
    AsdGxDisplayBuffers* secondary = secondaryEnabled ? secondaryPreset : primary;
    value = secondary->buffers[previous];
    asdGfxSetMode(0x410);
    asdGfxBindTarget(value);
    value = output->buffers[asdGxPresetPrevious(output)];
    asdGfxSetMode(0x401);
    asdGfxBindTarget(value);
    if (refresh) {
        asdGxCmdBufferFinalizeBlock();
        FUN_00154ca4(primary, 1);
        FUN_00154ca4(secondaryPreset, secondaryEnabled);
        FUN_00154ca4(output, 1);
    }
    FUN_00161694(0x402);
    primary->index = (primary->index + 1) % primary->count;
    secondaryPreset->index = (secondaryPreset->index + 1) % secondaryPreset->count;
    output->index = (output->index + 1) % output->count;
}
}