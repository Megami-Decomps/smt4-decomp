#ifndef SHARD_W6_W6MATCH5_DISPLAYMODE_H
#define SHARD_W6_W6MATCH5_DISPLAYMODE_H

#include "common.h"
#include <stddef.h>

struct GraphicsQueueEntry {
    u8 unk00[2];
    u8 ready; // 0x02
    u8 unk03;
    u32 unk04; // 0x04
    u32 byteCount; // 0x08
    u32 flags; // 0x0c
    u8 unk10[0x0c];
};
struct GraphicsQueue {
    union {
        u8 unk00[0x18];
        struct {
            u8 unk00[0x10];
            u32 submittedBytes; // 0x10
            u8 unk14[4];
        } accounting;
    };
    GraphicsQueueEntry *entries; // 0x18
    u8 unk1c[8];
    u32 activeCount; // 0x24
    u32 currentEntry; // 0x28
};

typedef char GraphicsQueueEntrySizeCheck[sizeof(GraphicsQueueEntry) == 0x1c ? 1 : -1];
typedef char GraphicsQueueEntryBytesOffsetCheck[offsetof(GraphicsQueueEntry, byteCount) == 8 ? 1 : -1];
typedef char GraphicsQueueCurrentEntryOffsetCheck[offsetof(GraphicsQueue, currentEntry) == 0x28 ? 1 : -1];

struct GraphicsTarget {
    u32 unk00;
    u8 *pixels; // 0x04
    u32 format; // 0x08
    u32 width; // 0x0c
    u32 height; // 0x10
};

struct DisplayModeContext {
    u8 unk000[8];
    u32 topScreenWidth; // 0x008: 400 normally, 800 in wide mode
    union {
        u8 unk00c[0x158];
        struct {
            u8 unk00c[5];
            u8 enabled; // 0x011
            u8 pending; // 0x012
            u8 unk013[5];
            u8 ready; // 0x018
            u8 unk019[0x87];
            GraphicsQueue *queue; // 0x0a0
        } submission;
        struct {
            u8 unk00c[0x118];
            u32 active; // 0x124
            GraphicsTarget *targets[3]; // 0x128
        } query;
        struct {
            /* 0x00C */ u8 unk00c[0x148];
            /* 0x154 */ u32 firstCount;
            /* 0x158 */ u32 secondCount;
        } completion;
    };
    u32 topScreenMode; // 0x164
};

typedef char DisplayModeContextSizeCheck[sizeof(DisplayModeContext) == 0x168 ? 1 : -1];
typedef char DisplayModeContextCompletionOffsetCheck[offsetof(DisplayModeContext, completion) == 0xC ? 1 : -1];
typedef char DisplayModeContextCompletionSizeCheck[sizeof(((DisplayModeContext *)0)->completion) == 0x150 ? 1 : -1];

extern "C" DisplayModeContext g_asdGfxContext;

#endif
