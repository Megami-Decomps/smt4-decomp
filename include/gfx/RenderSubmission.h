#ifndef GFX_RENDERSUBMISSION_H
#define GFX_RENDERSUBMISSION_H

#include "common.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include <stddef.h>

struct RenderSubmissionPacket {
    /* 0x00 */ u16 flags;
    /* 0x02 */ u8 unk02[0x4E];
    /* 0x50 */ u32 color;
};
struct RenderSubmissionResource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ RenderSubmissionPacket* packet;
};
struct RenderSubmissionOwner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 color;
    /* 0x28 */ u32 drawMode;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ u32 frame;
    /* 0x38 */ u8 unk38[0x1E];
    /* 0x56 */ u8 depthEnabled;
};
struct RenderSubmission {
    /* 0x00 */ f32 position[4];
    /* 0x10 */ f32 rotation[4];
    /* 0x20 */ f32 scale[4];
    /* 0x30 */ u32 color;
    /* 0x34 */ u32 frame;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ RenderSubmissionResource* resource;
    /* 0x40 */ RenderSubmissionOwner* owner;
};
union RenderSubmissionColor {
    u32 value;
    struct {
        u8 red;
        u8 green;
        u8 blue;
        u8 alpha;
    } channels;
};
typedef char RenderSubmissionOffsetsCheck[offsetof(RenderSubmission, owner) == 0x40 &&
    offsetof(RenderSubmissionOwner, depthEnabled) == 0x56 &&
    offsetof(RenderSubmissionPacket, color) == 0x50 ? 1 : -1];

#endif
