/* map/mapIf.c: the map's interface (HUD). */
#ifndef MAP_MAPIF_H
#define MAP_MAPIF_H

#include "common.h"

#define MAP_IF_WIDGETS 0x23
#define MAP_IF_SLOTS 4

/* A widget the interface loads from its resource group. */
typedef struct MapIfWidget {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ s32 unk40;
} MapIfWidget;

typedef struct MapIfWidgets {
    /* 0x00 */ MapIfWidget *widget[MAP_IF_WIDGETS];
} MapIfWidgets;

typedef struct MapIfSlot {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 handle;
} MapIfSlot;

/* The interface's state block (Shin Megami Tensei IV layout). */
typedef struct MapIfState {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[0x14];
    /* 0x0018 */ u8 unk18;
    /* 0x0019 */ u8 unk19[3];
    /* 0x001C */ s32 unk1C;
    /* 0x0020 */ u8 unk20[0x10];
    /* 0x0030 */ s32 unk30;
    /* 0x0034 */ s32 unk34;
    /* 0x0038 */ s32 unk38;
    /* 0x003C */ union {
        u8 unk3C[0xCBB0];
        struct {
            u8 unk3C[0x194];
            u8 records[0x80][0x194]; // 0x01d0
            u8 unkCBD0[0x1c];
        } recordPool;
    };
    /* 0xCBEC */ u32 unkCBEC;
    /* 0xCBF0 */ MapIfSlot slots[MAP_IF_SLOTS];
    /* 0xCC70 */ u8 unkCC70[0x48];
    /* 0xCCB8 */ s16 unkCCB8;
    /* 0xCCBA */ s16 unkCCBA;
    /* 0xCCBC */ u8 unkCCBC[0x1C];
    /* 0xCCD8 */ u8 unkCCD8;
    /* 0xCCD9 */ u8 unkCCD9[3];
    /* 0xCCDC */ u32 unkCCDC;
} MapIfState;

struct Rec194;

/* Typed view without importing the generic shard headers into the map interface. */
static __inline Rec194 *mapIfGetRecords(MapIfState *state)
{
    return (Rec194 *)state->recordPool.records;
}

/* The module global: the state block and the widget table's pointers, side by side. */
typedef struct MapIfGlobals {
    /* 0x00 */ MapIfState *state;
    /* 0x04 */ MapIfWidgets *widgets;
} MapIfGlobals;

#define MAP_IF_SLOTS_A 5

struct MapIfResourceVtable;

/* A resource object whose handle sits at +4. */
typedef struct MapIfResource {
    /* 0x00 */ union {
        u8 unk00[4];
        MapIfResourceVtable *vtable;
    };
    /* 0x04 */ u32 handle;
} MapIfResource;

typedef struct MapIfSlotA {
    /* 0x00 */ union {
        u8 unk00[0x1C];
        u8 active;
    };
    /* 0x1C */ MapIfResource *resource;
} MapIfSlotA;

/* The interface's state block (Apocalypse layout); only the fields read so far are named. */
typedef struct MapIfStateA {
    /* 0x0000 */ u8 unk0000[0x1D];
    /* 0x001D */ u8 unk1D;
    /* 0x001E */ u8 unk1E[2];
    /* 0x0020 */ s32 unk20;
    /* 0x0024 */ u8 unk24[0x18];
    /* 0x003C */ s32 unk3C;
    /* 0x0040 */ s32 unk40;
    /* 0x0044 */ s32 unk44;
    /* 0x0048 */ u8 unk48[0xCB94];
    /* 0xCBDC */ MapIfSlotA slots[MAP_IF_SLOTS_A];
    /* 0xCC7C */ u8 unkCC7C[0x6C];
    /* 0xCCE8 */ s16 unkCCE8;
    /* 0xCCEA */ s16 unkCCEA;
    /* 0xCCEC */ u8 unkCCEC[0x1C];
    /* 0xCD08 */ u8 unkCD08;
    /* 0xCD09 */ u8 unkCD09[3];
    /* 0xCD0C */ u32 unkCD0C;
} MapIfStateA;

typedef struct MapIfGlobalsA {
    /* 0x00 */ MapIfStateA *state;
    /* 0x04 */ MapIfWidgets *widgets;
} MapIfGlobalsA;

#endif
