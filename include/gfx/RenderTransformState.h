#ifndef GFX_RENDER_TRANSFORM_STATE_H
#define GFX_RENDER_TRANSFORM_STATE_H
#include "shard/W5_W5Match2_PlainData.h"
#include <stddef.h>

struct RenderTransformState {
    u8 unk000[0x52C];
    u32 mode;
    Matrix44 transform;
    Matrix44 inverse;
    u8 dirty;
    u8 unk5B1[0xB5B];
    Matrix44 view;
    Matrix44 projection;
    Matrix44 combined;
};
typedef char RenderTransformStateOffsets[
    offsetof(RenderTransformState, mode) == 0x52C &&
    offsetof(RenderTransformState, transform) == 0x530 &&
    offsetof(RenderTransformState, inverse) == 0x570 &&
    offsetof(RenderTransformState, dirty) == 0x5B0 &&
    offsetof(RenderTransformState, view) == 0x110C &&
    offsetof(RenderTransformState, projection) == 0x114C &&
    offsetof(RenderTransformState, combined) == 0x118C ? 1 : -1];
#endif
