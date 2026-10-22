#ifndef MAP_DEFERRED_MODELS_H
#define MAP_DEFERRED_MODELS_H

#include "common.h"
#include <stddef.h>

struct DeferredModelEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 ready;
    /* 0x02 */ u8 visible;
    /* 0x03 */ u8 unk03[3];
    /* 0x06 */ s16 id;
    /* 0x08 */ s16 modelId;
    /* 0x0A */ u16 flags;
    /* 0x0C */ float speed;
    /* 0x10 */ float offset;
    /* 0x14 */ float x;
    /* 0x18 */ float y;
    /* 0x1C */ float angle;
    /* 0x20 */ u32 handle;
    /* 0x24 */ float z;
    /* 0x28 */ u16 state;
    /* 0x2A */ u16 timer;
    /* 0x2C */ u32 callback;
    /* 0x30 */ u32 userData;
    /* 0x34 */ u32 resource;
};
struct DeferredModelWork {
    /* 0x000 */ u32 state;
    /* 0x004 */ u32 count;
    /* 0x008 */ u32 current;
    /* 0x00C */ DeferredModelEntry entries[64];
    /* 0xE0C */ u8 pending;
    /* 0xE0D */ u8 unkE0D[3];
    /* 0xE10 */ u32 pendingCount;
    /* 0xE14 */ u8 unkE14[0x28];
    /* 0xE3C */ u8 updating;
};

typedef char DeferredModelEntrySizeCheck[sizeof(DeferredModelEntry) == 0x38 ? 1 : -1];
typedef char DeferredModelIdOffsetCheck[offsetof(DeferredModelEntry, id) == 6 ? 1 : -1];
typedef char DeferredModelWorkEntriesCheck[offsetof(DeferredModelWork, entries) == 0xC ? 1 : -1];
typedef char DeferredModelWorkPendingCheck[offsetof(DeferredModelWork, pending) == 0xE0C ? 1 : -1];
typedef char DeferredModelWorkUpdatingCheck[offsetof(DeferredModelWork, updating) == 0xE3C ? 1 : -1];

#endif
