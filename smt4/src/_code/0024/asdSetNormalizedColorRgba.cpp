/* NON_MATCHING: three natural conversion/store forms differ in VFP register allocation and do not reproduce retail's grouped RGB VSTM. */
#include "common.h"

struct NormalizedColor {
    f32 red;   // 0x00
    f32 green; // 0x04
    f32 blue;  // 0x08
    f32 alpha; // 0x0c
};

extern "C" NormalizedColor DAT_004ea91c;

// Convert the packed RGBA channels into the current normalized color.
extern "C" void asdSetNormalizedColorRgba(u32 packed)
{
    DAT_004ea91c.alpha = f32(packed & 0xff) * (1.0f / 255.0f);
    DAT_004ea91c.red = f32(packed >> 24) * (1.0f / 255.0f);
    DAT_004ea91c.green = f32((packed >> 16) & 0xff) * (1.0f / 255.0f);
    DAT_004ea91c.blue = f32((packed >> 8) & 0xff) * (1.0f / 255.0f);
}
