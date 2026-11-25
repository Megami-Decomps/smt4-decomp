#ifndef MAP_MAPOBJ_H
#define MAP_MAPOBJ_H

#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

struct MapObjectSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ union { u8 unk01; u8 visible; };
    /* 0x02 */ union { u8 unk02; u8 enabled; };
    /* 0x03 */ u8 unk03;
    /* 0x04 */ union { f32 unk04; f32 x; };
    /* 0x08 */ union { f32 unk08; f32 y; };
    /* 0x0C */ union { f32 unk0c; f32 z; };
    /* 0x10 */ union { f32 unk10; f32 originX; };
    /* 0x14 */ union { f32 unk14; f32 height; };
    /* 0x18 */ union { f32 unk18; f32 depth; };
    /* 0x1C */ union { f32 unk1c; f32 placement; }; /* heading for points; scale for some objects */
    /* 0x20 */ u32 unk20;
    /* 0x24 */ union { s32 state; s32 kind; };
    /* 0x28 */ void *model;
    /* 0x2C */ union { char name[0x18]; u8 unk2c; };
    /* 0x44 */ union { s32 id; s32 entryIndex; };
};

struct MapObjectState {
    /* 0x000 */ MapObjectRequest request;
    /* 0x014 */ MapObjectSlot slots[24];
};

typedef char MapObjectSlotSizeCheck[sizeof(MapObjectSlot) == 0x48 && offsetof(MapObjectSlot, model) == 0x28 &&
    offsetof(MapObjectSlot, name) == 0x2C && offsetof(MapObjectSlot, entryIndex) == 0x44 &&
    offsetof(MapObjectState, request.loading.slot) == 0x0C && offsetof(MapObjectState, slots) == 0x14 ? 1 : -1];

#endif
