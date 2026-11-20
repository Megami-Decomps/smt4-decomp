/* The block at 0x4650a0. */
#ifndef SHARD_SYS4650A0_H
#define SHARD_SYS4650A0_H

#include "common.h"
#include <stddef.h>

struct PadAnalogCalibration;

typedef struct Sys4650a0 {
    /* 0x00 */ PadAnalogCalibration *calibration;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 flags;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ f32 deadZone;
} Sys4650a0;
typedef char Sys4650a0PadOffsets[offsetof(Sys4650a0, flags) == 0x8 &&
    offsetof(Sys4650a0, deadZone) == 0x14 ? 1 : -1];

extern Sys4650a0 g_padInputState;

#endif
