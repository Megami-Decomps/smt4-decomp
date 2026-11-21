#pragma once
#include "common.h"

/* Coloured-quad submission (both games): one corner colour per vertex, drawn with the texture
 * rectangle zeroed. The parameter order is the one every caller's argument schedule shows (the
 * best of all 126 interleavings of the four colours and five floats, scored over every caller in
 * both games); armcc schedules a call's arguments in the callee's declared order. */
extern "C" void gxSubmitDrawZeroExtraParams(f32 x, f32 y, f32 width, f32 height, u32 topLeft, u32 bottomLeft,
                                            u32 topRight, f32 depth, u32 bottomRight);

struct EffectColor;

/* Draws a quad with one RGBA float colour per corner; a NULL corner takes the default colour
 * (white). The parameter order is the one the callers' argument schedules show (the best of the
 * 126 interleavings of the five floats and four colours over its callers in both games); both
 * definitions compile identically in it, and the neighbouring FUN_002b7638 takes the same order. */
extern "C" void gfxDrawQuadFourColors(f32 x, f32 y, f32 width, f32 height, const EffectColor *first,
                                      const EffectColor *second, const EffectColor *third,
                                      const EffectColor *fourth, f32 depth);
