#ifndef SHARD_W6_W6MATCH8_TITLE_OVERLAY_H
#define SHARD_W6_W6MATCH8_TITLE_OVERLAY_H

#include "common.h"
#include <stddef.h>

struct TitleDrawElement {
    u8 unk00[0x20];
    f32 scale;              /* 0x20 */
    u8 unk24[0x61];
    u8 visible;             /* 0x85 */
    u8 unk86[6];
};
struct TitleOverlay {
    u8 unk00[8];
    u8 visible;             /* 0x008 */
    u8 mode;                /* 0x009 */
    u8 unk0a[0x1e];
    u32 phase;              /* 0x028 */
    u8 unk2c[0xb];
    u8 enabled[5];          /* 0x037 */
    u8 unk3c[0x88];
    TitleDrawElement elements[7]; /* 0x0c4 */
    TitleDrawElement choices[5];  /* 0x498 */
};

struct TitleOverlayParameters {
    /* 0x00 */ f32 speed;
    /* 0x04 */ s32 offset;
};
typedef char TitleOverlayParametersLayoutCheck[sizeof(TitleOverlayParameters) == 8 &&
    offsetof(TitleOverlayParameters, offset) == 4 ? 1 : -1];

#endif
