#ifndef SHARD_MODELWORKSIZE_H
#define SHARD_MODELWORKSIZE_H

#include "common.h"

struct ModelWorkSize {
    /* 0x00 */ u32 entryCount;
    /* 0x04 */ u16 countA;
    /* 0x06 */ u16 countB;
    /* 0x08 */ u16 countC;
    /* 0x0a */ u8 extraEnabled;
    /* 0x0b */ u8 unk0b;
    /* 0x0c */ u8 extendedEnabled;
};

#endif
