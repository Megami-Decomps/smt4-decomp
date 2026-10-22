/* NON_MATCHING: Quad bounds and clamp constants use different VFP scheduling. */
#include "ui/FrameTex.h"

// Padding uses the engine's signed IEEE-754 bit comparison, including its NaN behavior.
static __inline f32 frameQuadClampPadding(f32 padding)
{
    union FloatRepresentation { f32 value; s32 bits; } representation;
    representation.value = padding;
    return representation.bits < 0x3F800000 ? 1.0f : padding;
}

extern "C" {
extern FrameWork* g_frameTex;

// Builds the padded 400-by-240 frame quad and publishes its rendering parameters.
void FUN_001dd140(u32 first, u32 second, u8 option, u32 resource, f32 horizontalPadding, f32 verticalPadding)
{
    horizontalPadding = frameQuadClampPadding(horizontalPadding);
    verticalPadding = frameQuadClampPadding(verticalPadding);
    FrameWork* work = g_frameTex;
    work->quadX[0] = -horizontalPadding;
    work->quadX[1] = horizontalPadding + 400.0f;
    work->quadX[2] = -horizontalPadding;
    work->quadX[3] = horizontalPadding + 400.0f;
    work->quadY[0] = -verticalPadding;
    work->quadY[1] = -verticalPadding;
    work->quadY[2] = verticalPadding + 240.0f;
    work->quadY[3] = verticalPadding + 240.0f;
    work->unkEC0 = second;
    work->unkEC4 = 0.0f;
    work->unkECC = option;
    work->unkEC8 = first;
    work->unkE90 = resource;
    work->quadActive = 1;
}
}
