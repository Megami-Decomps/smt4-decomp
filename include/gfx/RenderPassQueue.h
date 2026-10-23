#ifndef GFX_RENDERPASSQUEUE_H
#define GFX_RENDERPASSQUEUE_H
#include "common.h"
#include <stddef.h>
struct RenderPassItem { u8 data[0x30]; };
struct RenderPassBlend {
    u8 enabled;
    u8 operation;
    u8 unk02;
    u8 source;
    u8 unk04;
    u8 destination;
};
struct RenderPassQueue {
    RenderPassItem *begin;
    RenderPassItem *end;
    RenderPassItem *capacity;
    u32 **commands;
    u8 unk10[0x10];
    RenderPassBlend blend;
    u8 unk26[0x8E];
    u8 active;
};
struct RenderPassDepthState { u8 enabled; u8 data[0x4B]; };
struct RenderPassColorState { f32 value; u8 data[0x1C]; };
struct RenderPassViewportState { u8 data[0x18]; };
typedef char RenderPassQueueOffsets[offsetof(RenderPassQueue, blend) == 0x20 && offsetof(RenderPassQueue, active) == 0xB4 && sizeof(RenderPassItem) == 0x30 ? 1 : -1];
#endif
