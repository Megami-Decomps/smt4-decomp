/* NON_MATCHING: Quad bounds and clamp constants use different VFP scheduling. */
#include "frame_tex/FrameTex.h"

// Padding uses the engine's signed IEEE-754 bit comparison, including its NaN behavior.
static __inline f32 frameQuadClampPadding(f32 padding)
{
    union FloatRepresentation { f32 value; s32 bits; } representation;
    representation.value = padding;
    return representation.bits < 0x3F800000 ? 1.0f : padding;
}

extern "C" {

// Builds the padded 400-by-240 frame quad and publishes its rendering parameters.
void FUN_001dd140(u32 first, u32 second, u8 option, u32 resource, f32 horizontalPadding, f32 verticalPadding)
{
    horizontalPadding = frameQuadClampPadding(horizontalPadding);
    verticalPadding = frameQuadClampPadding(verticalPadding);
    FrameTexWork* work = g_frameTex;
    work->hdr.x[0] = -horizontalPadding;
    work->hdr.x[1] = horizontalPadding + 400.0f;
    work->hdr.x[2] = -horizontalPadding;
    work->hdr.x[3] = horizontalPadding + 400.0f;
    work->hdr.y[0] = -verticalPadding;
    work->hdr.y[1] = -verticalPadding;
    work->hdr.y[2] = verticalPadding + 240.0f;
    work->hdr.y[3] = verticalPadding + 240.0f;
    work->hdr.color = second;
    work->hdr.depth = 0.0f;
    work->hdr.filtered = option;
    work->hdr.blendMode = first;
    work->hdr.levels = resource;
    work->hdr.ready = 1;
}
}
