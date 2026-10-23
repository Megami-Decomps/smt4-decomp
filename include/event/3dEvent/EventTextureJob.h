#ifndef EVENT_3DEVENT_EVENT_TEXTURE_JOB_H
#define EVENT_3DEVENT_EVENT_TEXTURE_JOB_H
#include "common.h"
#include <stddef.h>

struct EventTexturePosition { f32 x, y; };

struct EventTextureJobWork {
    /* 0x00 */ u32 texture;
    /* 0x04 */ s32 state;
    /* 0x08 */ f32 colorScale;
    /* 0x0C */ f32 opacity;
    /* 0x10 */ f32 fadeStep;
    /* 0x14 */ u8 stopWhenHidden;
    /* 0x15 */ u8 initialized;
    /* 0x16 */ u8 visible;
    /* 0x17 */ u8 unk17;
    union {
        /* 0x18 */ u8 unk18[0x1C];
        struct {
            u8 prefix[0x14];
            /* 0x2C */ f32 x;
            /* 0x30 */ f32 y;
        } position;
    };
    /* 0x34 */ u32 resource;
    /* 0x38 */ s32 resourceId;
    /* 0x3C */ s32 animation;
    /* 0x40 */ f32 animationFrame;
    /* 0x44 */ u8 animate;
    /* 0x45 */ u8 unk45[3];
};
typedef char EventTextureJobWorkOffsets[sizeof(EventTextureJobWork) == 0x48 &&
    offsetof(EventTextureJobWork, state) == 4 &&
    offsetof(EventTextureJobWork, opacity) == 0xC &&
    offsetof(EventTextureJobWork, resource) == 0x34 &&
    offsetof(EventTextureJobWork, animationFrame) == 0x40 &&
    offsetof(EventTextureJobWork, animate) == 0x44 ? 1 : -1];
typedef char EventTextureJobWorkPositionOffsets[
    offsetof(EventTextureJobWork, position.x) == 0x2C &&
    offsetof(EventTextureJobWork, position.y) == 0x30 &&
    sizeof(EventTextureJobWork) == 0x48 ? 1 : -1];
#endif
