/* The scene block held in DAT_0043dcf0: four character timers at 0x298, a title timer at 0x4C8 and the state byte at 0x66C. */
#ifndef SHARD_SCENE43DCF0_H
#define SHARD_SCENE43DCF0_H

#include "common.h"

typedef struct TimerSlot {
    u8 data[0x8C];
} TimerSlot;

typedef struct Scene43dcf0 {
    /* 0x0000 */ u8 unk0000[0x1C];
    /* 0x001C */ s32 unk1C;
    /* 0x0020 */ u8 unk0020[0xC];
    /* 0x002C */ u32 unk2C;
    /* 0x0030 */ u8 unk0030[0x4];
    /* 0x0034 */ u8 unk34;
    /* 0x0035 */ u8 unk35;
    /* 0x0036 */ u8 unk0036[0xC];
    /* 0x0042 */ u8 unk42;
    /* 0x0043 */ u8 unk0043[0x13D];
    /* 0x0180 */ u8 timerC[1];
    /* 0x0181 */ u8 unk0181[0x117];
    /* 0x0298 */ TimerSlot timers[4];
    /* 0x04C8 */ TimerSlot timerB;
    /* 0x0554 */ u8 unk0554[0x118];
    /* 0x066C */ u8 state;
    /* 0x066D */ u8 unk066D[0x5B];
    /* 0x06C8 */ u32 unk6C8[4];
    /* 0x06D8 */ u32 unk6D8[0x18];
} Scene43dcf0;

extern Scene43dcf0 *DAT_0043dcf0;

#endif
