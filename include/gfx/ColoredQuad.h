#pragma once
#include "common.h"

/* Coloured-quad submission (both games): one corner colour per vertex, drawn with the texture
 * rectangle zeroed. The parameter order is the one every caller's argument schedule shows (the
 * best of all 126 interleavings of the four colours and five floats, scored over every caller in
 * both games); armcc schedules a call's arguments in the callee's declared order. */
extern "C" void gxSubmitDrawZeroExtraParams(f32 x, f32 y, f32 width, f32 height, u32 topLeft, u32 bottomLeft,
                                            u32 topRight, f32 depth, u32 bottomRight);
