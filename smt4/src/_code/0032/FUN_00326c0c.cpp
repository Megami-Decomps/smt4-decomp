/* NON_MATCHING: retail writes the 32-bit vertex colours as byte stores through rev/lsr extraction of a register value (an unaligned store; `__packed` stores of the same values still compile to plain str here) and keeps the loop-invariant fade bounds in the stack; this version stores the colour bytes directly. */
#include "effect/FadeStrip.h"

static __inline void flagsSetBits(u32 *flags, u32 mask)
{
    *flags |= mask;
}

static __inline void flagsClearBits(u32 *flags, u32 mask)
{
    *flags &= mask;
}


extern "C" {
void rt_memcpy(void *destination, const void *source, u32 bytes);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
}

// Builds a fading vertex strip: one base strip with `segments + 1` vertices whose alpha ramps in and out, then copies
// of it for each further repeat.
extern "C" void FUN_00326c0c(StripOwnerView *owner, StripParameters *params)
{
    u32 repeatCount = params->repeatCount;
    if (repeatCount == 0)
        return;

    StripGeometry *geometry = owner->geometry;
    StripColor *baseColors = geometry->description->colors;
    StripCoords *baseCoords = geometry->description->coords;
    flagsSetBits(&geometry->flags, 0x24);

    s32 segments = params->segments;
    u32 vertexCount = segments + 1;
    s32 fadeInEnd = static_cast<s32>(params->fadeInEnd * static_cast<f32>(segments));
    s32 fadeOutStart = static_cast<s32>(params->fadeOutStart * static_cast<f32>(segments));
    f32 step = params->spacing * 0.33333334f;

    StripColor *color = baseColors;
    StripCoords *coords = baseCoords;
    for (u32 i = 0; i < vertexCount; i++) {
        f32 fade;
        if (static_cast<s32>(i) < fadeInEnd) {
            fade = static_cast<f32>(i) / static_cast<f32>(fadeInEnd);
        } else {
            fade = 1.0f;
            if (fadeOutStart < static_cast<s32>(i)) {
                fade = static_cast<f32>(segments - i) / static_cast<f32>(segments - fadeOutStart);
            }
        }
        color->first[0] = 0xff;
        color->first[1] = 0xff;
        color->first[2] = 0xff;
        color->first[3] = 0;
        u32 alpha = static_cast<u32>(fade * 255.0f);
        color->second[0] = 0xff;
        color->second[1] = 0xff;
        color->second[2] = 0xff;
        color->second[3] = static_cast<u8>(alpha);
        color->third = *reinterpret_cast<u32 *>(color->second);
        color->fourth[0] = 0xff;
        color->fourth[1] = 0xff;
        color->fourth[2] = 0xff;
        color->fourth[3] = 0;
        coords->v0 = 0.0f;
        coords->v1 = step;
        coords->v2 = step * 2.0f;
        coords->v3 = step * 3.0f;
        color++;
        coords++;
    }
    for (u32 repeat = 1; repeat < repeatCount; repeat++) {
        rt_memcpy(color, baseColors, vertexCount * sizeof(StripColor));
        color += vertexCount;
        __aeabi_memcpy4(coords, baseCoords, vertexCount * sizeof(StripCoords));
        coords += vertexCount;
    }
}
