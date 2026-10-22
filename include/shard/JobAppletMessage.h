#ifndef SHARD_JOBAPPLETMESSAGE_H
#define SHARD_JOBAPPLETMESSAGE_H

#include "shard/JobWork.h"

struct JobAppletMessage {
    /* 0x000 */ u8 unk000[0x754];
    /* 0x754 */ u32 flags;
    /* 0x758 */ u8 unk758[0x5fc];
    /* 0xd54 */ u32 sectionIndex;
    /* 0xd58 */ u8 unkd58[8];
    /* 0xd60 */ u32 operation;
};

#endif
