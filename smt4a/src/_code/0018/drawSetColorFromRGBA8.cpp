/* NON_MATCHING: RGB extraction and its VFP conversions use different registers and schedule
 * the opaque alpha load earlier. The stores and literal pool now have retail's shape. */
#include "shard/W6_W6Match7_QuadVectors.h"

/* Expands the three RGB bytes; the quad state supplies alpha, not the low byte. */
extern "C" void drawSetColorFromRGBA8(u32 packed)
{
    QuadVector color;
    color.xyz.x = (f32)(u8)(packed >> 24);
    color.xyz.y = (f32)(u8)(packed >> 16);
    color.xyz.z = (f32)(u8)(packed >> 8);
    const f32 normalize = 1.0f / 255.0f;
    color.xyz.x *= normalize;
    color.xyz.y *= normalize;
    color.xyz.z *= normalize;
    gxSetUniformQuadColors(&color.xyz);
}
