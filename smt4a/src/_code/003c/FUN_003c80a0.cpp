/* NON_MATCHING: 189 lines: the colours are now stored through the byte-reversed packing (rev/lsr strb) as retail does;
 * remaining: retail keeps repeatCount in fp and the segment count in lr (the build spills both), copies the mirrored
 * colour word through core registers (the build uses vldr/vstr) and schedules the flag update after the buffer loads. */
#include "effect/FadeStrip.h"

extern "C" {
void rt_memcpy(void *destination, const void *source, u32 bytes);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
}

/* Builds a fading vertex strip: one base strip of `segments + 1` rings of four vertices whose alpha ramps in and out,
 * then copies of it for each further repeat. */
extern "C" void FUN_003c80a0(StripOwnerView *owner, StripParameters *params)
{
    u32 repeatCount = params->repeatCount;
    if (repeatCount == 0)
        return;

    StripGeometry *geometry = owner->geometry;
    StripColor *baseColors = geometry->description->colors;
    StripCoords *baseCoords = geometry->description->coords;
    geometry->flags |= 0x24;

    s32 segments = params->segments;
    u32 rings = segments + 1;
    s32 fadeInEnd = static_cast<s32>(params->fadeInEnd * static_cast<f32>(segments));
    s32 fadeOutStart = static_cast<s32>(params->fadeOutStart * static_cast<f32>(segments));
    f32 step = params->spacing * 0.33333334f;

    StripColor *color = baseColors;
    StripCoords *coords = baseCoords;
    for (u32 i = 0; i < rings; i++) {
        f32 fade;
        if (static_cast<s32>(i) < fadeInEnd) {
            fade = static_cast<f32>(i) / static_cast<f32>(fadeInEnd);
        } else {
            fade = 1.0f;
            if (fadeOutStart < static_cast<s32>(i)) {
                fade = static_cast<f32>(segments - i) / static_cast<f32>(segments - fadeOutStart);
            }
        }
        stripStoreColor(color->first, 0x00FFFFFF);
        stripStoreColor(color->second, 0x00FFFFFF | (static_cast<u32>(fade * 255.0f) << 24));
        color->third = *reinterpret_cast<u32 *>(color->second);
        stripStoreColor(color->fourth, 0x00FFFFFF);
        coords->v0 = 0.0f;
        coords->v1 = step;
        coords->v2 = step * 2.0f;
        coords->v3 = step * 3.0f;
        color++;
        coords++;
    }
    u32 vertices = rings * 4;
    for (u32 repeat = 1; repeat < repeatCount; repeat++) {
        rt_memcpy(color, baseColors, vertices * sizeof(u32));
        color += rings;
        __aeabi_memcpy4(coords, baseCoords, vertices * 8);
        coords += rings;
    }
}
