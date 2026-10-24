/* The map gimmick table (smt4): 24 slots of 0x28 bytes after a 0x1c-byte header, kept by the module
 * global g_mapGimic. Apocalypse's gimmick layout is map/mapGimic.h. */
#ifndef MAP_MAPGIMICTABLEIV_H
#define MAP_MAPGIMICTABLEIV_H

#include "common.h"
#include <stddef.h>

struct MapGimicTableSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 flag;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 position[3];
    /* 0x10 */ f32 radius;
    /* 0x14 */ u16 unk14;
    /* 0x16 */ s16 id;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u16 unk20;
    /* 0x22 */ u16 unk22;
    /* 0x24 */ u8 unk24[4];
};

struct MapGimicState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15[7];
    /* 0x1C */ MapGimicTableSlot slots[24];
};

typedef char MapGimicTableSlotSizeCheck[sizeof(MapGimicTableSlot) == 0x28 && offsetof(MapGimicState, slots) == 0x1C ? 1 : -1];

#endif
