/* NON_MATCHING: grouped RGB reads become VLDM and VFP allocation/load scheduling differ; retail uses three scalar VLDRs. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorOverride* DAT_00433a58;

// Prepare RGB step deltas toward neutral gray.
extern "C" void FUN_00221c10(void)
{
    EffectColorOverride* color = DAT_00433a58;
    if (color != NULL) {
        f32 red = 0.5f - color->red;
        f32 green = 0.5f - color->green;
        f32 blue = 0.5f - color->blue;
        color->enabled = 4;
        color->transition.delta.red = red * 0.1f;
        color->transition.delta.green = green * 0.1f;
        color->transition.delta.blue = blue * 0.1f;
    }
}
