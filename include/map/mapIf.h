/* map/mapIf.c: the map's interface (HUD). */
#ifndef MAP_MAPIF_H
#define MAP_MAPIF_H

#include "common.h"
#include <stddef.h>

typedef struct MapIfRecord {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x3];
    /* 0x04 */ union {
        s32 type;
        s32 state;
    };
    /* 0x08 */ union {
        u8 unk08[0x1C];
        struct {
            u8 unk08[0x0C];
            s32 category; // 0x14
        } display;
        struct {
            u8 unk08[0x10];
            s32 id; // 0x18
        } groupView;
        struct {
            s32 restart; // 0x08
        } transition;
    };
    /* 0x24 */ u32 handle;
    /* 0x28 */ union {
        u8 unk28[0x16C];
        struct {
            u8 unk28[0x19];
            u8 pending; // 0x41
        } request;
        struct {
            u8 unk28[0x28];
            f32 x; // 0x50
            f32 y; // 0x54
            f32 z; // 0x58
        } position;
        struct {
            u16 counter; // 0x28
            u8 unk2a[0x1a];
            s32 timer; // 0x44
        } update;
    };
} MapIfRecord;

typedef char MapIfRecordPositionCheck[sizeof(MapIfRecord) == 0x194 &&
    offsetof(MapIfRecord, position.x) == 0x50 ? 1 : -1];
typedef char MapIfRecordUpdateCheck[sizeof(MapIfRecord) == 0x194 &&
    offsetof(MapIfRecord, update.counter) == 0x28 &&
    offsetof(MapIfRecord, update.timer) == 0x44 ? 1 : -1];

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

typedef struct MapIfFastModelState {
    u8 active;
    u8 unk01[3];
    u32 first;
    u32 second;
    f32 position[3];
    f32 heading;
} MapIfFastModelState;

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
    /* 0x003C */ u8 unk3C[0x194];
    /* 0x01D0 */ MapIfRecord records[128];
    union {
        /* 0xCBD0 */ u8 unkCBD0[0x1C];
        /* 0xCBD0 */ MapIfFastModelState fastModel;
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
    /* 0x0000 */ union {
        u8 unk0000[0x1D];
        struct {
            u8 unk0000[0x1C];
            u8 unk1C;
        } head;
    };
    /* 0x001D */ u8 unk1D;
    /* 0x001E */ u8 unk1E[2];
    /* 0x0020 */ s32 unk20;
    /* 0x0024 */ u8 unk24[0x18];
    /* 0x003C */ s32 unk3C;
    /* 0x0040 */ s32 unk40;
    /* 0x0044 */ s32 unk44;
    /* 0x0048 */ u8 unk48[0x194];
    /* 0x01DC */ MapIfRecord records[128];
    /* 0xCBDC */ MapIfSlotA slots[MAP_IF_SLOTS_A];
    /* 0xCC7C */ u8 unkCC7C[0x6C];
    /* 0xCCE8 */ s16 unkCCE8;
    /* 0xCCEA */ s16 unkCCEA;
    /* 0xCCEC */ u8 unkCCEC[0x1C];
    /* 0xCD08 */ u8 unkCD08;
    /* 0xCD09 */ u8 unkCD09[3];
    /* 0xCD0C */ u32 unkCD0C;
    /* 0xCD10 */ u8 unkCD10[0x10];
    /* 0xCD20 */ f32 unkCD20;
    /* 0xCD24 */ f32 unkCD24;
} MapIfStateA;

typedef struct MapIfWidgetsA {
    /* 0x00 */ MapIfWidget *widget[0x2B];
} MapIfWidgetsA;

typedef struct MapIfGlobalsA {
    /* 0x00 */ MapIfStateA *state;
    /* 0x04 */ MapIfWidgetsA *widgets;
} MapIfGlobalsA;


/* Retail 32-bit layout invariants. */
typedef char MapIfRecordSizeCheck[sizeof(MapIfRecord) == 0x194 ? 1 : -1];
typedef char MapIfStateSizeCheck[sizeof(MapIfState) == 0xCCE0 ? 1 : -1];
typedef char MapIfStateASizeCheck[sizeof(MapIfStateA) == 0xCD28 ? 1 : -1];
typedef char MapIfGlobalsSizeCheck[sizeof(MapIfGlobals) == 0x8 ? 1 : -1];
typedef char MapIfGlobalsASizeCheck[sizeof(MapIfGlobalsA) == 0x8 ? 1 : -1];
typedef char MapIfStateAHeadCheck[offsetof(MapIfStateA, head.unk1C) == 0x1C ? 1 : -1];
typedef char MapIfFastModelOffsetsCheck[sizeof(MapIfFastModelState) == 0x1c &&
    offsetof(MapIfFastModelState, active) == 0 && offsetof(MapIfFastModelState, first) == 4 &&
    offsetof(MapIfFastModelState, second) == 8 && offsetof(MapIfFastModelState, position) == 0xc &&
    offsetof(MapIfFastModelState, heading) == 0x18 &&
    offsetof(MapIfState, fastModel) == 0xcbd0 ? 1 : -1];

#endif
