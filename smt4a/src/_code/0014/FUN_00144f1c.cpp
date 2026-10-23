/* NON_MATCHING: ring pointer/register allocation and secondary-ring selection instructions differ. */
#include "gfx/AsdGxPresetRing.h"

extern "C" {
extern AsdGxPresetRing g_asdGxPresets[3];
void asdGfxSetMode(s32 mode);
void FUN_00161074(u32 value);
void FUN_0017d294(void);
void FUN_00154ca4(AsdGxPresetRing* ring, s32 enabled);
void FUN_00161694(s32 mode);

// Submit the previous presets, optionally refresh them, then advance each ring.
void FUN_00144f1c(s32 refresh, s32 secondaryEnabled)
{
    AsdGxPresetRing* primary = &g_asdGxPresets[0];
    AsdGxPresetRing* secondaryPreset = &g_asdGxPresets[1];
    AsdGxPresetRing* output = &g_asdGxPresets[2];
    u32 value = primary->values[asdGxPresetPrevious(primary)];
    asdGfxSetMode(0x400);
    FUN_00161074(value);
    u32 previous = asdGxPresetPrevious(secondaryPreset);
    AsdGxPresetRing* secondary = secondaryEnabled ? secondaryPreset : primary;
    value = secondary->values[previous];
    asdGfxSetMode(0x410);
    FUN_00161074(value);
    value = output->values[asdGxPresetPrevious(output)];
    asdGfxSetMode(0x401);
    FUN_00161074(value);
    if (refresh) {
        FUN_0017d294();
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