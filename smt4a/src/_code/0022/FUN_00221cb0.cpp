/* NON_MATCHING: armcc interleaves the float-to-integer conversions with the channel merges;
 * retail converts the channels in two pairs before merging them. */
#include "gfx/EffectColorMath.h"
#include "gfx/VectorScratch.h"

/* Packs the current normalized color as RRGGBBAA. */
extern "C" u32 FUN_00221cb0()
{
    return effectColorPack(g_vectorScratch.first.color);
}
