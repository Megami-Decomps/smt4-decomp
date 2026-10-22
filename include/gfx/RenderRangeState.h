#ifndef GFX_RENDERRANGESTATE_H
#define GFX_RENDERRANGESTATE_H
#include "common.h"
#include <stddef.h>

union RenderPackedMode {
    u32 word;
    struct { u8 first, second, third, mode; } bytes;
};
struct RenderRangeTarget {
    u8 prefix[0xCC];
    u32 flags;
    u8 paddingD0[0xAC];
    f32 begin;
    f32 end;
    f32 zero;
    f32 one;
    f32 parameter;
    RenderPackedMode packed;
};
struct RenderRangeRegistry {
    u32 reserved;
    RenderRangeTarget *target;
};
struct RenderRangeInput {
    u8 prefix[0x58];
    u32 mode;
    u32 first;
    u32 second;
    u32 third;
    s32 start;
    s32 span;
    f32 parameter;
    f32 overrideBegin;
    f32 overrideEnd;
};
typedef char RenderRangeStateLayoutCheck[
    offsetof(RenderRangeTarget, begin) == 0x17C &&
    offsetof(RenderRangeTarget, packed) == 0x190 &&
    offsetof(RenderRangeInput, start) == 0x68 &&
    offsetof(RenderRangeInput, overrideEnd) == 0x78 &&
    sizeof(RenderPackedMode) == 4 ? 1 : -1];
#endif
