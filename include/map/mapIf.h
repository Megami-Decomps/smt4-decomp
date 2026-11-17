/* map/mapIf.c: the map's interface (HUD). */
#ifndef MAP_MAPIF_H
#define MAP_MAPIF_H

#include "common.h"
#include <stddef.h>
#include "map/MapActionMarker.h"

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
        struct {
            u8 unk08[4];
            u16 frame; // 0x0c
            u8 unk0e[2];
            u32 first; // 0x10
            u8 unk14[8];
            u32 second; // 0x1c
        } initialization;
        struct {
            u8 unk08[0x18];
            s32 destination; // 0x20 map or special code (-1, -2, -3) the entry leads to
        } navigation;
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
        struct {
            u8 unk28[4];
            u16 timer; // 0x2c
        } proximity;
        struct {
            u16 counters[3]; // 0x28
            u8 unk2e[2];
            f32 progress; // 0x30
            f32 limits[3]; // 0x34
            u8 flags[3]; // 0x40
            u8 unk43;
            u32 timer; // 0x44
            f32 heading; // 0x48
            u8 hidden; // 0x4c
            u8 unk4d[0xf];
            f32 start[3]; // 0x5c
            f32 current[3]; // 0x68
            f32 angle; // 0x74
            f32 size[2]; // 0x78
            s32 target; // 0x80
            u8 unk84[8];
            f32 offset; // 0x8c
            f32 transform[12]; // 0x90
            u8 unkc0[0xc4];
            u32 values[3]; // 0x184
            u32 handle; // 0x190
        } reset;
    };
} MapIfRecord;

typedef char MapIfRecordPositionCheck[sizeof(MapIfRecord) == 0x194 &&
    offsetof(MapIfRecord, position.x) == 0x50 ? 1 : -1];
typedef char MapIfRecordUpdateCheck[sizeof(MapIfRecord) == 0x194 &&
    offsetof(MapIfRecord, update.counter) == 0x28 &&
    offsetof(MapIfRecord, update.timer) == 0x44 ? 1 : -1];
typedef char MapIfRecordProximityCheck[sizeof(MapIfRecord) == 0x194 &&
    offsetof(MapIfRecord, proximity.timer) == 0x2c ? 1 : -1];
typedef char MapIfRecordInitializationOffsets[
    offsetof(MapIfRecord, initialization.frame) == 0xc &&
    offsetof(MapIfRecord, initialization.first) == 0x10 &&
    offsetof(MapIfRecord, initialization.second) == 0x1c &&
    offsetof(MapIfRecord, reset.counters) == 0x28 &&
    offsetof(MapIfRecord, reset.progress) == 0x30 &&
    offsetof(MapIfRecord, reset.limits) == 0x34 &&
    offsetof(MapIfRecord, reset.flags) == 0x40 &&
    offsetof(MapIfRecord, reset.timer) == 0x44 &&
    offsetof(MapIfRecord, reset.heading) == 0x48 &&
    offsetof(MapIfRecord, reset.hidden) == 0x4c &&
    offsetof(MapIfRecord, reset.start) == 0x5c &&
    offsetof(MapIfRecord, reset.current) == 0x68 &&
    offsetof(MapIfRecord, reset.angle) == 0x74 &&
    offsetof(MapIfRecord, reset.size) == 0x78 &&
    offsetof(MapIfRecord, reset.target) == 0x80 &&
    offsetof(MapIfRecord, reset.offset) == 0x8c &&
    offsetof(MapIfRecord, reset.transform) == 0x90 &&
    offsetof(MapIfRecord, reset.values) == 0x184 &&
    offsetof(MapIfRecord, reset.handle) == 0x190 &&
    sizeof(MapIfRecord) == 0x194 ? 1 : -1];

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

struct AsdMdlObject;
struct NodeEnableNode;
struct MapIfResource;

/* One of the interface's five marker model slots (0x20 bytes): slot 0 is the fast-travel marker
 * (map/all/lmap_fast.bam), the others the action markers (action_cave, action_up, ...). */
typedef struct MapIfModelSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 timer;
    /* 0x0C */ MapMarkerPosition position; /* xyz and heading (w) */
    /* 0x1C */ AsdMdlObject *model;
} MapIfModelSlot;

/* Apocalypse's marker model slot: the model is a model-list resource. */
typedef struct MapIfModelSlotA {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 timer;
    /* 0x0C */ MapMarkerPosition position; /* xyz and heading (w) */
    /* 0x1C */ MapIfResource *resource;
} MapIfModelSlotA;

/* A model marker the interface keeps in sync with the player state (0x24 bytes). */
struct MapIfModelMarker {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 state;  /* shown */
    /* 0x02 */ u8 flags;  /* 1 = changed since the last sync */
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ f32 position[3];
    /* 0x18 */ f32 heading;
    /* 0x1C */ union {
        u32 elapsed;
        u32 motionIndex;
    };
    /* 0x20 */ NodeEnableNode *model;
};
typedef char MapIfModelMarkerMotionOffset[
    offsetof(MapIfModelMarker, motionIndex) == 0x1c && sizeof(MapIfModelMarker) == 0x24 ? 1 : -1];

/* Apocalypse's model marker: the model is a model-list resource. */
typedef struct MapIfModelMarkerA {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 state;  /* shown */
    /* 0x02 */ u8 flags;  /* 1 = changed since the last sync */
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ f32 position[3];
    /* 0x18 */ f32 heading;
    /* 0x1C */ u32 elapsed;   /* the clip to play */
    /* 0x20 */ MapIfResource *resource;
} MapIfModelMarkerA;

/* A queued area notice: slides in, holds and slides out (state 0 = idle, 1 = queued). */
typedef struct MapIfNotice {
    /* 0x00 */ s16 state;
    /* 0x02 */ s16 frame;
    /* 0x04 */ s16 id;
    /* 0x06 */ s16 arg;
} MapIfNotice;

/* The interface's fade (0x18 bytes). */
typedef struct MapIfFade {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s16 id;
    /* 0x04 */ s16 step;
    /* 0x06 */ s16 frames;
    /* 0x08 */ s16 stepCopy;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ f32 offset[3];
} MapIfFade;

#define MAP_IF_MODEL_SLOTS 5

/* The interface's state block (Shin Megami Tensei IV layout, 0xCCE8 bytes, MapIf_Register). */
typedef struct MapIfState {
    /* 0x0000 */ u32 job;          /* the update task */
    /* 0x0004 */ u32 drawUpTask;
    /* 0x0008 */ u32 meshTask;
    /* 0x000C */ u8 unk0C[8];
    /* 0x0014 */ u8 unk14;
    /* 0x0015 */ u8 variant;
    /* 0x0016 */ s8 mode;
    /* 0x0017 */ u8 unk17;
    /* 0x0018 */ u8 unk18;         /* set while the interface's dialog is open */
    /* 0x0019 */ u8 unk19[3];
    /* 0x001C */ s32 unk1C;
    /* 0x0020 */ u8 unk20;
    /* 0x0021 */ u8 unk21[0xF];
    /* 0x0030 */ s32 unk30;
    /* 0x0034 */ s32 unk34;
    /* 0x0038 */ s32 unk38;
    union {
        /* 0x003C */ u8 unk3C[0x194];
        /* 0x003C */ MapIfRecord primary;
    };
    /* 0x01D0 */ MapIfRecord records[128];
    /* 0xCBD0 */ MapIfModelSlot slots[MAP_IF_MODEL_SLOTS];
    union {
        /* 0xCC70 */ u8 unkCC70[0x48];
        /* 0xCC70 */ MapIfModelMarker modelMarkers[2];
    };
    /* 0xCCB8 */ MapIfNotice notice;
    /* 0xCCC0 */ MapIfFade fade;
    /* 0xCCD8 */ s8 unkCCD8;       /* counting */
    /* 0xCCD9 */ u8 unkCCD9[3];
    /* 0xCCDC */ s32 unkCCDC;      /* counter */
    /* 0xCCE0 */ u8 unkCCE0;
    /* 0xCCE1 */ u8 unkCCE1[3];
    /* 0xCCE4 */ s32 unkCCE4;
} MapIfState;
typedef char MapIfPrimaryRecordOffset[offsetof(MapIfState, primary) == 0x3c &&
    offsetof(MapIfState, slots) == 0xCBD0 && offsetof(MapIfState, notice) == 0xCCB8 &&
    offsetof(MapIfState, fade) == 0xCCC0 && offsetof(MapIfState, unkCCD8) == 0xCCD8 &&
    sizeof(MapIfState) == 0xcce8 ? 1 : -1];

/* The module global: the state block and the widget table's pointers, side by side. */
typedef struct MapIfGlobals {
    /* 0x00 */ MapIfState *state;
    /* 0x04 */ MapIfWidgets *widgets;
} MapIfGlobals;

/* A model-list resource's vtable: slot 1 releases it. */
typedef struct MapIfResourceVtable {
    /* 0x00 */ void (*unk00)(struct MapIfResource *self);
    /* 0x04 */ void (*release)(struct MapIfResource *self);
} MapIfResourceVtable;

/* A model-list resource (modelListInit) whose controller handle sits at +4. */
typedef struct MapIfResource {
    /* 0x00 */ MapIfResourceVtable *vtable;
    /* 0x04 */ u32 handle;
} MapIfResource;

/* The interface's state block (Apocalypse layout, 0xCD30 bytes). */
typedef struct MapIfStateA {
    /* 0x0000 */ u32 job;          /* the calc task */
    /* 0x0004 */ u32 updateTask;
    /* 0x0008 */ u32 indicatorTask;
    /* 0x000C */ u8 unk0C[8];
    /* 0x0014 */ u8 unk14;
    /* 0x0015 */ u8 mode;
    /* 0x0016 */ u8 unk16;
    /* 0x0017 */ u8 unk17;
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk1C;
    /* 0x001D */ s8 dialogOpen;    /* set while the interface's dialog is open */
    /* 0x001E */ u8 unk1E[2];
    /* 0x0020 */ s32 unk20;
    /* 0x0024 */ u8 unk24;
    /* 0x0025 */ u8 unk25[0xF];
    /* 0x0034 */ s8 unk34;
    /* 0x0035 */ u8 unk35[3];
    /* 0x0038 */ u32 unk38;
    /* 0x003C */ s32 unk3C;
    /* 0x0040 */ s32 unk40;
    /* 0x0044 */ s32 unk44;
    union {
        /* 0x0048 */ u8 unk48[0x194];
        /* 0x0048 */ MapIfRecord primary;
    };
    /* 0x01DC */ MapIfRecord records[128];
    /* 0xCBDC */ MapIfModelSlotA slots[MAP_IF_MODEL_SLOTS];
    /* 0xCC7C */ MapIfModelMarkerA modelMarkers[3];
    /* 0xCCE8 */ MapIfNotice notice;
    /* 0xCCF0 */ MapIfFade fade;
    /* 0xCD08 */ s8 unkCD08;       /* counting */
    /* 0xCD09 */ u8 unkCD09[3];
    /* 0xCD0C */ u32 unkCD0C;      /* counter */
    /* 0xCD10 */ u8 unkCD10;
    /* 0xCD11 */ u8 unkCD11[3];
    /* 0xCD14 */ u32 unkCD14;
    union {
        /* 0xCD18 */ f32 fadeProgress;
        /* 0xCD18 */ s32 fadeProgressBits;
    };
    /* 0xCD1C */ u8 fadeMode;
    /* 0xCD1D */ u8 unkCD1D[3];
    /* 0xCD20 */ f32 unkCD20;
    /* 0xCD24 */ f32 unkCD24;
    /* 0xCD28 */ s32 fadeStep;
    /* 0xCD2C */ s32 fadeTimer;
} MapIfStateA;
typedef char MapIfStateAOffsetCheck[offsetof(MapIfStateA, slots) == 0xCBDC &&
    offsetof(MapIfStateA, modelMarkers) == 0xCC7C && offsetof(MapIfStateA, notice) == 0xCCE8 &&
    offsetof(MapIfStateA, fade) == 0xCCF0 && offsetof(MapIfStateA, unkCD08) == 0xCD08 &&
    offsetof(MapIfStateA, fadeProgress) == 0xCD18 ? 1 : -1];

typedef struct MapIfWidgetsA {
    /* 0x00 */ MapIfWidget *widget[0x2B];
} MapIfWidgetsA;

typedef struct MapIfGlobalsA {
    /* 0x00 */ MapIfStateA *state;
    /* 0x04 */ MapIfWidgetsA *widgets;
} MapIfGlobalsA;


/* Retail 32-bit layout invariants. */
typedef char MapIfRecordSizeCheck[sizeof(MapIfRecord) == 0x194 ? 1 : -1];
typedef char MapIfStateSizeCheck[sizeof(MapIfState) == 0xCCE8 ? 1 : -1];
typedef char MapIfStateASizeCheck[sizeof(MapIfStateA) == 0xCD30 ? 1 : -1];
typedef char MapIfGlobalsSizeCheck[sizeof(MapIfGlobals) == 0x8 ? 1 : -1];
typedef char MapIfGlobalsASizeCheck[sizeof(MapIfGlobalsA) == 0x8 ? 1 : -1];
typedef char MapIfStateAHeadCheck[offsetof(MapIfStateA, unk1C) == 0x1C ? 1 : -1];
typedef char MapIfStateAPrimaryOffsetCheck[
    offsetof(MapIfStateA, primary) == 0x48 && sizeof(MapIfStateA) == 0xCD30 ? 1 : -1];
typedef char MapIfModelMarkerOffsetsCheck[
    sizeof(MapIfModelMarker) == 0x24 &&
    offsetof(MapIfModelMarker, state) == 1 &&
    offsetof(MapIfModelMarker, flags) == 2 &&
    offsetof(MapIfModelMarker, first) == 4 &&
    offsetof(MapIfModelMarker, second) == 8 &&
    offsetof(MapIfModelMarker, position) == 0x0C &&
    offsetof(MapIfModelMarker, heading) == 0x18 &&
    offsetof(MapIfModelMarker, elapsed) == 0x1C &&
    offsetof(MapIfModelMarker, model) == 0x20 &&
    offsetof(MapIfState, modelMarkers) == 0xCC70 ? 1 : -1];

#endif
