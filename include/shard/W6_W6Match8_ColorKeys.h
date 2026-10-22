#ifndef SHARD_W6_W6MATCH8_COLOR_KEYS_H
#define SHARD_W6_W6MATCH8_COLOR_KEYS_H

#include "common.h"

struct ColorKey {
    u8 unk00[0x10];
    s32 frame;             /* 0x10 */
    u8 unk14[0x20];
    u8 red;                /* 0x34 */
    u8 green;              /* 0x35 */
    u8 blue;               /* 0x36 */
    u8 unk37[0xd];
};

struct ColorKeyTrack {
    ColorKey keys[4];       /* 0x000 */
    u8 unk110[0x100];
    f32 redStep;           /* 0x210 */
    f32 greenStep;         /* 0x214 */
    f32 blueStep;          /* 0x218 */
    u8 unk21c[0x20];
    f32 targetRed;         /* 0x23c */
    f32 targetGreen;       /* 0x240 */
    f32 targetBlue;        /* 0x244 */
    u8 unk248[0x99];
    s8 nextKey;            /* 0x2e1 */
    u8 unk2e2[0x32];
    s32 duration;          /* 0x314 */
};

struct ScalarTimelineKey {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 value;
    /* 0x10 */ s32 frame;
    /* 0x14 */ u32 unk14;
};
struct ScalarTimeline {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ ScalarTimelineKey keys[4];
};
typedef char ScalarTimelineKeySizeCheck[sizeof(ScalarTimelineKey) == 0x18 ? 1 : -1];

#endif
