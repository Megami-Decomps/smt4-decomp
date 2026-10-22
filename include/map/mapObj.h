#ifndef MAP_MAPOBJ_H
#define MAP_MAPOBJ_H

#include "shard/W5_W5Match1_RecordKeys.h"

struct MapObjectSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0c */ f32 unk0c;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1c */ f32 unk1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ s32 state;
    /* 0x28 */ void *model;
    /* 0x2c */ u8 unk2c;
    /* 0x2d */ u8 unk2d[0x17];
    /* 0x44 */ s32 id;
};

struct MapObjectState {
    /* 0x000 */ MapObjectRequest request;
    /* 0x014 */ MapObjectSlot slots[24];
};

typedef char MapObjectSlotSizeCheck[sizeof(MapObjectSlot) == 0x48 ? 1 : -1];

#endif
