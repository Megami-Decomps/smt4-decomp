#ifndef GFX_TRANSFORMHISTORY_H
#define GFX_TRANSFORMHISTORY_H
#include "common.h"
#include <stddef.h>
struct TransformHistoryWork {
    const u16 *input;
    u32 unk04;
    u32 stride;
    u32 recent[6];
    u32 next[6];
};
struct TransformHistory {
    TransformHistoryWork *work;
    u32 *entries;
    s32 capacity;
    s32 cursor;
    u32 sign;
    s32 mode;
    u32 blockSize;
    s32 enabled;
};
typedef char TransformHistoryOffsets[offsetof(TransformHistoryWork, recent) == 0xC && offsetof(TransformHistoryWork, next) == 0x24 && sizeof(TransformHistory) == 0x20 ? 1 : -1];
#endif
