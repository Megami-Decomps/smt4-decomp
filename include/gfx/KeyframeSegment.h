#ifndef GFX_KEYFRAMESEGMENT_H
#define GFX_KEYFRAMESEGMENT_H
#include "common.h"
#include <stddef.h>
struct KeyframeSegmentEntry {
    s32 time;
    u8 unk04[0x1C];
    s16 value;
    u8 unk22[6];
    s32 randomRange;
    u8 unk2C[0x18];
};
struct KeyframeSegmentState {
    u8 unk000[0x28];
    KeyframeSegmentEntry keys[4];
    u8 unk138[0xF8];
    f32 slope; /* 0x230 */
    u8 unk234[0x28];
    f32 target; /* 0x25C */
    u8 unk260[0x87];
    s8 keyIndex; /* 0x2E7 */
    u8 unk2E8[0x44];
    s32 duration; /* 0x32C */
};
typedef char KeyframeSegmentOffsets[sizeof(KeyframeSegmentEntry) == 0x44 && offsetof(KeyframeSegmentState, slope) == 0x230 && offsetof(KeyframeSegmentState, keyIndex) == 0x2E7 && offsetof(KeyframeSegmentState, duration) == 0x32C ? 1 : -1];
#endif
