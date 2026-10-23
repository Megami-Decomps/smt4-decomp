#ifndef GFX_LOCKED_RESOURCE_POOL_H
#define GFX_LOCKED_RESOURCE_POOL_H
#include "classes/Obj557f00.h"
#include <stddef.h>

struct LockedPoolElement { u32 words[6]; };
struct LockedResourceSlot {
    /* 0x00 */ u32 handle;
    /* 0x04 */ LockedPoolElement *elements;
    /* 0x08 */ f32 scaleX;
    /* 0x0C */ f32 scaleY;
    /* 0x10 */ u8 unk10[0x28];
    /* 0x38 */ s32 capacity;
    /* 0x3C */ s32 width;
    /* 0x40 */ s32 height;
    /* 0x44 */ u32 cursors[4];
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u64 submitted;
    /* 0x60 */ u64 completed;
    /* 0x68 */ u8 unk68[8];
};
struct LockedResourcePool {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj557f00Allocator *allocator;
    /* 0x08 */ LockedResourceSlot *slots;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u32 count;
};
typedef char LockedResourceSlotOffsets[
    sizeof(LockedPoolElement) == 0x18 &&
    offsetof(LockedResourceSlot, elements) == 4 &&
    offsetof(LockedResourceSlot, scaleX) == 8 &&
    offsetof(LockedResourceSlot, scaleY) == 0xC &&
    offsetof(LockedResourceSlot, capacity) == 0x38 &&
    offsetof(LockedResourceSlot, width) == 0x3C &&
    offsetof(LockedResourceSlot, height) == 0x40 &&
    offsetof(LockedResourceSlot, cursors) == 0x44 &&
    offsetof(LockedResourceSlot, submitted) == 0x58 &&
    offsetof(LockedResourceSlot, completed) == 0x60 &&
    sizeof(LockedResourceSlot) == 0x70 &&
    offsetof(LockedResourcePool, allocator) == 4 &&
    offsetof(LockedResourcePool, slots) == 8 &&
    offsetof(LockedResourcePool, count) == 0x14 ? 1 : -1];
#endif
