#ifndef SHARD_THREADCONTROL_H
#define SHARD_THREADCONTROL_H

#include "common.h"

struct ThreadControl {
    /* 0x00 */ u8 criticalSection[0x0c];
    /* 0x0c */ s32 state;
    /* 0x10 */ u8 unk10[0x10];
    /* 0x20 */ u8 wakeEvent[8];
};

#endif
