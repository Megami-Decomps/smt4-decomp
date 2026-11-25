#ifndef GFX_ROUTEDCONNECTOR_H
#define GFX_ROUTEDCONNECTOR_H
#include "common.h"
#include <stddef.h>
#include <math.h>

struct RoutedConnectorState {
    /* 0x00 */ u8 unk00[0xE4];
    /* 0xE4 */ u8 reverse;
};
struct RoutedConnectorStateA {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u8 reverse;
};
typedef char RoutedConnectorStateOffsetCheck[
    offsetof(RoutedConnectorState, reverse) == 0xE4 &&
    offsetof(RoutedConnectorStateA, reverse) == 0xA4 ? 1 : -1];

/* Aligns a nearly coincident elbow with the connector's origin. */
static __inline f32 snapConnectorBend(const f32 *start, f32 bendX)
{
    return fabsf(bendX - start[0]) < 1.0f ? start[0] : bendX;
}

extern "C" void uiDrawSegmentStrip(u32 firstEffect, u32 secondEffect, f32 startX, f32 startY,
                                   f32 endX, f32 endY, f32 height, f32 width);
#endif
