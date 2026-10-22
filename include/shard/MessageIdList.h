/* A list of up to twelve message ids taken from one message group, each with a touch region. */
#ifndef SHARD_MESSAGEIDLIST_H
#define SHARD_MESSAGEIDLIST_H

#include "common.h"
#include <stddef.h>

struct MessageIdList {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 group;
    /* 0x08 */ s32 firstItem;
    /* 0x0C */ s32 itemCount;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ u16 selected;
    /* 0x16 */ u16 unk16;
    /* 0x18 */ u16 ids[12];
    /* 0x30 */ s16 idCount;
};

typedef char MessageIdListIdCountOffsetCheck[offsetof(MessageIdList, idCount) == 0x30 ? 1 : -1];

#endif
