#ifndef GFX_PACKED_RENDER_STATE_H
#define GFX_PACKED_RENDER_STATE_H
#include "common.h"
#include <stddef.h>

struct PackedRenderParameters {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 variant;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 resource;
    /* 0x0C */ u16 values[6];
    /* 0x18 */ s16 offsetX;
    /* 0x1A */ u16 offsetY;
};
struct PackedRenderState {
    /* 0x00 */ u32 values[6];
    /* 0x18 */ u32 flags;
    /* 0x1C */ union {
        u32 mode;
        struct { u16 unk1C; u8 format; u8 kind; } formatInfo;
    };
    /* 0x20 */ u8 variant;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ u32 resource;
    /* 0x28 */ u16 phase;
    /* 0x2A */ u16 timer;
    /* 0x2C */ u8 red;
    /* 0x2D */ u8 green;
    /* 0x2E */ u8 blue;
    /* 0x2F */ u8 alpha;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u8 active;
    /* 0x39 */ u8 unk39[0x17];
    /* 0x50 */ s16 offsetX;
    /* 0x52 */ u16 offsetY;
};
typedef char PackedRenderStateLayoutCheck[sizeof(PackedRenderState) == 0x54 &&
    offsetof(PackedRenderState, flags) == 0x18 && offsetof(PackedRenderState, offsetX) == 0x50 ? 1 : -1];
typedef char PackedRenderParametersLayoutCheck[sizeof(PackedRenderParameters) == 0x1C &&
    offsetof(PackedRenderParameters, values) == 0xC ? 1 : -1];
#endif
