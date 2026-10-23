/* NON_MATCHING: ring pointer/register allocation and secondary-ring selection instructions differ. */
#include "gfx/AsdGxPresetRing.h"

extern "C" {
extern AsdGxPresetRing g_asdGxPresets[3];
void asdGfxSetMode(s32 mode);
void FUN_002c2620(u32 value);
void FUN_002bc1e4(void);
void FUN_002bc120(AsdGxPresetRing* ring, s32 enabled);
void FUN_001235b8(s32 mode);

// Submit the previous presets, optionally refresh them, then advance each ring.
void FUN_0010ec90(s32 refresh, s32 secondaryEnabled)
{
    AsdGxPresetRing* primary = &g_asdGxPresets[0];
    AsdGxPresetRing* secondaryPreset = &g_asdGxPresets[1];
    AsdGxPresetRing* output = &g_asdGxPresets[2];
    u32 value = primary->values[asdGxPresetPrevious(primary)];
    asdGfxSetMode(0x400);
    FUN_002c2620(value);
    u32 previous = asdGxPresetPrevious(secondaryPreset);
    AsdGxPresetRing* secondary = secondaryEnabled ? secondaryPreset : primary;
    value = secondary->values[previous];
    asdGfxSetMode(0x410);
    FUN_002c2620(value);
    value = output->values[asdGxPresetPrevious(output)];
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
