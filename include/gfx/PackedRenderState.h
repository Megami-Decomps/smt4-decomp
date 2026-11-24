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
    union {
        /* 0x18 */ u32 flags;
        /* 0x18 */ s16 templateIndex; /* the low half: the template the sprite was built from */
    };
    /* 0x1C */ union {
        u32 mode;
        /* The mode bits are assigned one at a time: FUN_003bc248 fills bits 0-2, then phase and timer, then bits 3-5,
         * and FUN_003bbfdc clears them in that order (retail's copy of it inlined in spriteDescriptorInitFromTemplate
         * keeps the two clears apart: bic #4, bic #56). Bit 2 is the flag btlSpriteSelectSource tests. */
        struct {
            u32 unk0 : 1;
            u32 unk1 : 1;
            u32 unk2 : 1;
            u32 unk3 : 1;
            u32 unk4 : 1;
            u32 unk5 : 1;
            u32 unk6 : 10;
            u8 format;
            u8 kind;
        } modeFields;
    };
    /* 0x20 */ s8 variant; /* signed, as FUN_003bc248's page (retail extracts it with asr) */
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ u32 resource;
    /* 0x28 */ u16 phase;
    /* 0x2A */ u16 timer;
    /* 0x2C */ u8 red;
    /* 0x2D */ u8 green;
    /* 0x2E */ u8 blue;
    /* 0x2F */ u8 alpha;
    /* 0x30 */ f32 scale[2];
    /* 0x38 */ u8 active;
    /* 0x39 */ u8 unk39[0x17];
    /* 0x50 */ s16 offsetX;
    /* 0x52 */ u16 offsetY;
};
typedef char PackedRenderStateLayoutCheck[sizeof(PackedRenderState) == 0x54 &&
    offsetof(PackedRenderState, modeFields.format) == 0x1E && offsetof(PackedRenderState, modeFields.kind) == 0x1F &&
    offsetof(PackedRenderState, flags) == 0x18 && offsetof(PackedRenderState, offsetX) == 0x50 ? 1 : -1];
typedef char PackedRenderParametersLayoutCheck[sizeof(PackedRenderParameters) == 0x1C &&
    offsetof(PackedRenderParameters, values) == 0xC ? 1 : -1];
#endif
