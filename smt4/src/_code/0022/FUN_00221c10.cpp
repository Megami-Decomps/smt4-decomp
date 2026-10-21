/* NON_MATCHING: grouped RGB reads become VLDM and VFP allocation/load scheduling differ; retail uses three scalar VLDRs. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorOverride* DAT_00433a58;

// Prepare RGB step deltas toward neutral gray.
extern "C" void FUN_00221c10(void)
{
    EffectColorOverride* color = DAT_00433a58;
    if (color != NULL) {
        EffectRgb delta = { 0.5f - color->red, 0.5f - color->green, 0.5f - color->blue };
        color->enabled = 4;
        delta.red *= 0.1f;
        delta.green *= 0.1f;
        delta.blue *= 0.1f;
        color->transition.delta = delta;
    }
}
