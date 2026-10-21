#ifndef SHARD_W6_W6MATCH5_DISPLAYMODE_H
#define SHARD_W6_W6MATCH5_DISPLAYMODE_H

#include "common.h"

struct GraphicsQueueEntry {
    u8 unk00[2];
    u8 ready; // 0x02
    u8 unk03[0x19];
};
struct GraphicsQueue {
    u8 unk00[0x18];
    GraphicsQueueEntry *entries; // 0x18
    u8 unk1c[8];
    u32 activeCount; // 0x24
};

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
    };
    u32 topScreenMode; // 0x164
};

extern "C" DisplayModeContext g_asdGfxContext;

#endif
